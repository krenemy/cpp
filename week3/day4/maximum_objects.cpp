#include <iostream>
#include <vector>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     ll _t;cin>>_t;
    while (_t--) {
        ll n,m;cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        ll ans=0;
        ll i=0;
        while(i<n){
            m=m-a[i];
            if(m>=0) ans++;
            else break;
            i++;
        }
        cout<<ans<<"\n";

    }
}