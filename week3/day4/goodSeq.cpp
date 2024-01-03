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
        ll n;cin>>n;
        unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            mp[x]++;
        }
        ll x=0;
        for(auto i:mp){
            if(i.second>i.first) x+=i.second-i.first;
            else if(i.second<i.first) x+=i.second;
        }
        cout<<x<<endl;

    }
}