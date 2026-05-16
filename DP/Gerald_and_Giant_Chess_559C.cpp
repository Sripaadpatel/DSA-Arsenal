// Problem: Gerald_and_Giant_Chess_559C
// Date: 2026-05-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()
int nCm(int n, int m){
    if(m>n) return 0;
    if(m==0 or m==n) return 1;
    ll res=1;
    for(int i=1;i<=m;i++){
        res = res*(n-i+1);
        res = res/i;
    }
    return res;
}
void solve() {
    // Your solution here
    int h, w, n;
    cin >> h >> w >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> black;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        black.push({x, y});
    }
    ll ans = 0;
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}