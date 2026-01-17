// Problem: Vanya-Lanterns-492B
// Date: 2026-01-16

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<double>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve(int n, int l, vi &a) {
    // Your solution here
    sort(all(a));
    double max_gap = max(a[0],l-a[n-1]);
    for(int i=0;i<n-1;i++){
        max_gap= max(max_gap,(a[i+1]-a[i])/2);
    }
    cout<<fixed << setprecision(10)<<max_gap<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,l;
    cin>>n>>l;
    vi positions(n);
    for(int i=0;i<n;i++){
        cin>>positions[i];
    }
    solve(n,l,positions);
    return 0;
}