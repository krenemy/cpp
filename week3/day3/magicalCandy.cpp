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
        ll n,k;
        cin>>n>>k;
        multiset<ll> st;
        for(ll i=0;i<n;i++){ll x;cin>>x;st.insert(x);}
        ll ans=0;
        while(k>0){
            auto it=--st.end();
            ll x=*it;
            ans+=x;
            st.erase(it);
            st.insert(x/2);
            k--;
        }cout<<ans<<endl;
    }
}
