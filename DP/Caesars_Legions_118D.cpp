// Problem: Caesars_Legions_118D
// Date: 2026-05-07

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    // Your solution here
    int n,m,k1,k2;
    cin >> n >> m >> k1 >> k2;
    vector<vector<vi>> dp(n+1, vector<vector<int>>(m+1, vector<int>(2,0)));
    dp[0][0][0]=1;
    dp[0][0][1]=1;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 and j==0)continue;
            if(i>0){
                for(int x=1;x<=min(i,k1);x++){
                    dp[i][j][0]=(dp[i][j][0]+dp[i-x][j][1])%100000000;
                }
            }
            if(j>0){
                for(int x=1;x<=min(j,k2);x++){
                    dp[i][j][1]=(dp[i][j][1]+dp[i][j-x][0])%100000000;
                }
            }
        }
    }

    cout<<(dp[n][m][0]+dp[n][m][1])%100000000<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}