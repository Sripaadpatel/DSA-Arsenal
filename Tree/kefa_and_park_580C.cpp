// Problem: kefa_and_park_580C
// Date: 2026-05-05

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()
int n, m;
int sol=0;
int ccats=0;
vi cats;
vi adj[100000];

void dfs(int node){
    if(cats[node] == 1) ccats++;
    if(ccats > m){
        ccats=0;
        return;
    }
    if(cats[node] == 0) ccats=0;
    if(adj[node].size()==0){
        ccats=0;
        sol++;
        return;
    }
    for(int a : adj[node]){
        dfs(a);
    }

}
void solve() {
    // Your solution here
    int n, m;
    cin >> n >> m;
    ::n = n;
    ::m = m;
    vi cats(n);
    for (int i = 0; i < n; i++) {
        int cat;
        cin >> cat;
        cats[i] = cat;
    }
    ::cats = cats;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].pb(v);

    }
    dfs(0);
    cout << sol << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}