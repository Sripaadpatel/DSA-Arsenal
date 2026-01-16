// Problem: Bit-Plus-Plus-282A
// Date: 2026-01-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()
int x=0;
void solve() {
    // Your solution here
    string s;

    cin >> s;
    if (s == "++X" || s == "X++") {
        x++;
    } else if (s == "--X" || s == "X--") {
        x--;
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
    cout << x << endl;
    return 0;
}