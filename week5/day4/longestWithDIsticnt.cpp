#include <iostream>
#include <vector> 
#include <map> 
#include <set> 
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    while(_t--){
        ll n;cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        map<ll,ll> mp;
        ll head=-1,tail=0,ans=0;
        while(tail<n){
            while(head+1<n && mp[a[head+1]]==0){
                head++;
                mp[a[head]]++;
            }
            // for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
            // cout<<endl;
            ans=max(ans,head-tail+1);
            if(head>=tail){
                mp.erase(a[tail]);
                tail++;
            }
            else{
                tail++;
                head=tail-1;
            }
        }
       cout<<ans<<endl;
    }    
}