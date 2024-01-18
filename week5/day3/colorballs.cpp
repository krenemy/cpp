#include <iostream>
#include <vector> 
#include <map> 
using namespace std;
typedef long long ll;
#include <stack>
int check(ll mid,ll n,ll k,vector<ll> &a,map<ll,ll> mp){
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){cin>>a[i];mp[a[i]]++;}
        ll s = mp.size();
        ll lo=0,hi=s,ans=-1;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(check(mid,n,k,a,mp)==1){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }    
}