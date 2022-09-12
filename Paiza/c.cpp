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
    int n,x,y;
    cin >> n >> x >> y;
    rep(i,1,n+1){
        if(i%x==0 and i%y==0){
            cout << "AB" << endl;
        } else if(i%x==0){
            cout << "A" << endl;
        } else if(i%y==0){
            cout << "B" << endl;
        } else {
            cout << "N"<< endl;
        }
    }

    return 0;
}