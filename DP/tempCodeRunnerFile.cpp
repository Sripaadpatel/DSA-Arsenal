// Problem: Tyndex.Brome_62B
// Date: 2026-05-15

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    // Your solution here
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<string> c(n);
    for(int i=0;i<n;i++) cin>>c[i];
    vector<int> left_pos(26, -1e9);
    vector<int> right_pos(26, 1e9);

    for(int i=0;i<k;i++){
        char a = s[i];
        left_pos[a-'a'] = i;

    }
    for(int i=k-1;i>=0;i--){
        int a = s[i]-'a';
        right_pos[a] = i;

    }

    for(auto t : c){
        int sum=0;
        for(int i=0;i<t.length();i++){
            sum += min({abs(left_pos[t[i]-'a']-i), abs(right_pos[t[i]-'a']-i), k});
        }
        cout<<sum<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}