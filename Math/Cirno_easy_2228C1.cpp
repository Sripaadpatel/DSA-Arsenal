// Problem: Cirno_easy_2228C1
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
    int a,n;
    cin>>a>>n;
    vector<int> d(n);
    for(int i=0;i<n;i++) cin>>d[i];
    int ans = min({abs(a-d[0]), abs(a-d[1]), abs(a-(10*d[0]+d[1])), abs(a-(10*d[1]+d[0]))});
    cout << ans << "\n";
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