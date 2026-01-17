// Problem: Two-Buttons-520B
// Date: 2026-01-17

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve(int n, int m) {
    // Your solution here

    if(n>=m){
        cout<<n-m<<endl;
        return;
    }
    int steps=0;
    while(n<m){
        if(m%2==0){
            m/=2;
            steps++;
        }
        else{
            m++;
            steps++;
        }
    }
    steps += (n - m);
    cout<<steps<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; 
    cin >> n >> m;
    solve(n,m);
    return 0;
}