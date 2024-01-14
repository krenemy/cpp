#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <utility>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--) {
        ll n;cin>>n;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            mp[x]++;
        }
        cout<<mp.size()<<endl;
    }
}