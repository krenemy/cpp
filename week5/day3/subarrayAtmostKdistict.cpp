#include <iostream>
#include <vector>
#include <map> 
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        map<ll,ll> mp;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll head=-1,tail=0,ans=0;
        while(tail<n){
            while(head+1<n && (mp.size()<k || mp[a[head+1]]>=1)){
                head++;
                // if(mp[a[head]]==0) cntDis++;
                mp[a[head]]++;
            }
            ans+=head-tail+1;
            if(head>=tail){
                mp[a[tail]]--; 
                if(mp[a[tail]]==0) mp.erase(a[tail]);
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