#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
typedef long long ll;
ll binPow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }return res;
}
const int mod = 1e9 + 7;
signed main() {
    int _t;
    cin >> _t;
    while (_t--) {
        ll a,b,c,p;
        cin>>a>>b>>c>>p;
        ll x = binPow(b,c,p-1);
        ll ans = binPow(a,x,p);
        cout<<ans%p<<"\n";
    }
}