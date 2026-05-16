// Problem: Remilia_2228B
// Date: 2026-05-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    // Your solution here
    int n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    ll ans=0;
    ans+=k+1;
    int diff = min(abs(x1-x2)-1,n - abs(x1-x2)+1);
    ans+=diff;
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}