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
        ll a[n],b[m];
        unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>a[i];mp[a[i]]++;
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
            if(mp.find(b[i])!=mp.end()){
                mp[b[i]]++;
                cout<<"YES"<<endl;
            }else{
                mp[b[i]]++;
                cout<<"NO"<<endl;}
        }

    }
}