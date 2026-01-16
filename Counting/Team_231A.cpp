// Problem: Team-231A
// Date: 2026-01-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()
int count=0;
void solve() {
    // Your solution here
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>=2) ::count++;
    return;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    cout << ::count << endl;
    return 0;
}