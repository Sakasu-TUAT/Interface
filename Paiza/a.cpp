#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;
// #define rep(i,n) for(ll i=0; i<(n); ++i)
#define Out(x) cout << x << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define Ans cout << ans << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<string, string>;
// const ll mod = 10e9+7;

int main(){
    int n; cin>>n;
    vector<int> a(n),b(n),c(1e6),d(n);
    rep(i,0,n){cin >> a[i] >> b[i]; d[i] = b[i];}
    sort(d.begin(), d.end(), greater<int>());

    rep(i,0,n){
        rep(j,a[i],b[i]+1){
            c[j]++;
        }
    }
    int ans=0, cnt=0;
    rep(i,0,d[0]+1){
        if(c[i]!=0) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt=0;
        }
    }
    cout << ans << endl;



    

    return 0;
}