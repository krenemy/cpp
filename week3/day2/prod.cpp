#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
signed main() {
    int _t;
    cin >> _t;
    while (_t--) {
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll ans=1;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            ans=1ll*ans*a[i] % mod;
        }
        cout<<ans<<endl;

    }
}