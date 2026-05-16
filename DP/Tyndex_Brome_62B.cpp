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
    vector<vector<int>> left_pos(k, vector<int>(26, -1e9));
    vector<vector<int>> right_pos(k, vector<int>(26, 1e9));
    vector<int> lastseen(26, -1e9);

    for(int i=0;i<k;i++){
        char a = s[i];
        lastseen[a-'a'] = i;
        left_pos[i]=lastseen;
    }
    lastseen = vector<int>(26, 1e9);
    for(int i=k-1;i>=0;i--){
        char a = s[i];
        lastseen[a-'a']=i;
        right_pos[i] = lastseen;
    }
    
    for(auto t : c){
        unsigned long long sum=0;
        for(int j=0;j<t.length();j++){
            int i=j;
            if(j>=k) i=k-1;
            if(left_pos[i][t[j]-'a'] ==  -1e9 and right_pos[i][t[j]-'a'] == 1e9) sum+= t.length();
            else sum += min(abs(left_pos[i][t[j]-'a']-j), abs(right_pos[i][t[j]-'a']-j));
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