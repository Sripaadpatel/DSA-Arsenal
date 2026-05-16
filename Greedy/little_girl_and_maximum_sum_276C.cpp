// Problem: little_girl_and_maximum_sum
// Date: 2026-05-11

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    // Your solution here
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i].first >> queries[i].second;
        queries[i].first--;
        queries[i].second--;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}