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
    int n,m; cin >> n >> m;
    vector<int> a(n),b(m),c(n);
    rep(i,0,n){cin >> a[i];}
    rep(i,0,m){cin >> b[i];}
    int currentNum = 0;
    int waitingNum = 0;
    int totalNum = 0;
    rep(i,0,m){
        totalNum += b[i];
    }
    while(1){
        if(currentNum == totalNum){break;}
        rep(i,0,n){
            if(a[i]<b[waitingNum]){
                c[i] += a[i];
                b[waitingNum]-=a[i];  //b[i]で待っている残り人数
                currentNum +=a[i];
            } else if(a[i]>=b[waitingNum]){
                c[i] += b[waitingNum];
                currentNum +=b[waitingNum];
                b[waitingNum]=0;  
                waitingNum++;
                waitingNum %= m;
            }
        }
    }
    rep(i,0,n){
        cout << c[i] << endl;
    }
    return 0;
}