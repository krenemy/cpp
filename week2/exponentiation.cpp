#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
ll binPow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }return res;
}
signed main() {
    int _t;
    cin >> _t;
    while (_t--) {
        ll a,b,c,p;
        cin>>a>>b>>c>>p;
        if(a==0 && b==0 && c!=0) cout<<1<<"\n";
        else if(b==0 && c==0) cout<<a%p<<"\n";
        else{
            ll x = binPow(b,c,p-1);
            ll ans = binPow(a,x,p);
            cout<<ans%p<<"\n";
        }

    }
}