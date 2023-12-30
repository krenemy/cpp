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
        ll ans=0;
        if(n<=3) cout<<ans<<"\n";
        else {
        ans = 1ll*(n*(n-1)*(n-2)*(n-3)/24) % mod;
        cout<<ans<<endl;}

    }

}