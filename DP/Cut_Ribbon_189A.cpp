// Problem: Cut-Ribbon-189A
// Date: 2026-01-17

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -1e9);
    
    dp[0] = 0; 

    for (int i = 1; i <= n; i++) {
        if (i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}