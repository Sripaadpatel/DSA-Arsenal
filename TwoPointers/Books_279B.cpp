// Problem: Books-279B
// Date: 2026-01-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve(int n, int t) {
    // Your solution here
    vi pages(n);
    for(int i=0;i<n;i++) {
        cin>>pages[i];
    }
    int l=0, r=0;
    int current_sum=0;
    int max_books=0;
    while(r<n){
        current_sum+=pages[r];
        if(current_sum>t){
            while(current_sum>t)current_sum-=pages[l++];
        }
        max_books = max(max_books,r-l+1);
        r++;
    }
    cout<<max_books<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    solve(n,t);

    return 0;
}