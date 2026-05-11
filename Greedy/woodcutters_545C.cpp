// Problem: woodcutters_545C
// Date: 2026-05-08

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
    cin>>n;
    if (n==1) {
        cout<<1<<endl;
        return;
    }
    vector<pair<int,int>> trees(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int h;
        cin>>h;
        trees[i]={x,h};
    }
    int ans=2;
    int last_pos=trees[0].first;
    for(int i=1;i<n-1;i++){
        int x = trees[i].first;
        int h = trees[i].second;
        if(last_pos<x-h) {
            last_pos = x;
            ans++;
        }
        else if(trees[i+1].first > x+h) {
            last_pos = x+h;
            ans++;
        }
        else {
            last_pos = x;
        }
    }
    cout<<ans<<endl;
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}