#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll n,m;cin>>n>>m;
        map<ll,ll> ma;
        ll ans=0;
        while(n--){
            ll x,u;cin>>x>>u;ma[1ll*x*u]++;
        }
        while(m--){
            ll y,v;cin>>y>>v;
            if(ma[1ll*y*v]>0){
                ans++;ma[1ll*y*v]--;
            }
        }cout<<ans<<"\n";
    }
}