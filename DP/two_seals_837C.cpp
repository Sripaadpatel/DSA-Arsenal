// Problem: two_seals_837C
// Date: 2026-05-07

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()
void rotate(vi &s){
    int t= s[0];
    s[0]=s[1];
    s[1]=t;
}
void solve() {
    // Your solution here
    int n,a,b;
    cin >> n >> a >> b;
    vector<vi> seals(n, vi(2,0));
    for(int i=0;i<n;i++){
        cin >> seals[i][0] >> seals[i][1];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            auto s1 = seals[i];
            auto s2 = seals[j];
            int a1 = s1[0], b1 = s1[1]; 
            int a2 = s2[0], b2 = s2[1];
            int total_area = a1*b1 + a2*b2;
            if((max(a1,a2)<=a and b>=b1+b2) or (max(b1,b2)<=b and a>= a1+a2)){
                ans = max(ans, total_area);
                continue;
            }
            rotate(s2);
            a2 = s2[0], b2 = s2[1];
            if((max(a1,a2)<=a and b>=b1+b2) or (max(b1,b2)<=b and a>= a1+a2)){
                ans = max(ans, total_area);
                continue;
            }
            rotate(s1);
            a1 = s1[0], b1 = s1[1]; 
            if((max(a1,a2)<=a and b>=b1+b2) or (max(b1,b2)<=b and a>= a1+a2)){
                ans = max(ans, total_area);
                continue;
            }
            rotate(s2);
            a2 = s2[0], b2 = s2[1];
            if((max(a1,a2)<=a and b>=b1+b2) or (max(b1,b2)<=b and a>= a1+a2)){
                ans = max(ans, total_area);
                continue;
            }
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