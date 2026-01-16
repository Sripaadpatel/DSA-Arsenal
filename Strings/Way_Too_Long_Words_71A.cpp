// Problem: Way-Too-Long-Words-71A
// Date: 2026-01-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    // Your solution here
    string s;
    cin >> s;
    if (s.length() > 10) {
        cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
    } else {
        cout << s << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}