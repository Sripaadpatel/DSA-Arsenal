// Problem: Boredom-455A
// Date: 2026-01-19

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    // Your solution here
    int n;
    cin >> n;
    vll freq(100001, 0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    vll dp(100001, 0);
    dp[0]=0;
    dp[1]=freq[1];
    for(int i=2;i<=100000;i++){
        dp[i]=max(dp[i-1], dp[i-2]+i*freq[i]);
    }
    cout<<dp[100000]<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}