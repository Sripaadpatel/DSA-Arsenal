import sys
import os
import subprocess
from datetime import datetime

# CONFIGURATION
REPO_PATH = os.getcwd()
TEMPLATE_PATH = os.path.join(REPO_PATH, "template.cpp")

def create_problem(category, name):
    # Sanitize filename: "Watermelon 4A" -> "Watermelon_4A.cpp"
    safe_name = name.replace(' ', '_').replace('-', '_')
    filename = f"{safe_name}.cpp"
    
    # Define paths
    target_folder = os.path.join(REPO_PATH, category)
    target_file = os.path.join(target_folder, filename)

    # 1. Create Folder if missing
    if not os.path.exists(target_folder):
        os.makedirs(target_folder)
        print(f" [+] Created folder: {category}")

    # 2. Read Template
    content = ""
    if os.path.exists(TEMPLATE_PATH):
        with open(TEMPLATE_PATH, 'r') as f:
            content = f.read()
    else:
        content = "#include <bits/stdc++.h>\nusing namespace std;\n\nint main() {\n    return 0;\n}"

    # 3. Write File
    if not os.path.exists(target_file):
        with open(target_file, 'w') as f:
            header = f"// Problem: {name}\n// Date: {datetime.now().strftime('%Y-%m-%d')}\n\n"
            f.write(header + content)
        print(f" [+] Created: {target_file}")
        
        # Open in VS Code (Windows command)
        os.system(f"code \"{target_file}\"")
    else:
        print(f" [!] File already exists: {filename}")

def push_to_git(name):
    print(f"\n [>] Staging and Committing {name}...")
    try:
        # Add all changes
        subprocess.run(["git", "add", "."], check=True)
        
        # Commit with dynamic message
        commit_msg = f"Solved: {name}"
        subprocess.run(["git", "commit", "-m", commit_msg], check=True)
        
        # Push
        # Note: This requires you to have run 'git remote add origin ...' once before
        subprocess.run(["git", "push"], check=True)
        print(" [✓] Deployment Successful (Pushed to GitHub)")
    except subprocess.CalledProcessError as e:
        print(f" [X] Git Error: {e}")
    except Exception as e:
        print(f" [X] Error: {e}")

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python auto_cp.py [Category] [Problem Name]")
        print("Example: python auto_cp.py Greedy Watermelon")
    else:
        category = sys.argv[1]
        problem_name = " ".join(sys.argv[2:])
        
        create_problem(category, problem_name)
        
        # The script pauses here while you code
        input("\n>>> PRESS ENTER AFTER YOU SOLVE THE PROBLEM TO PUSH TO GIT <<<")
        
        push_to_git(problem_name)