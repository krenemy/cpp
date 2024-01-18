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
        map<ll,ll> mp;
        for(ll i=0;i<n;i++) {cin>>a[i];mp[a[i]]++;}
        ll dis=mp.size();mp.clear();
        ll head=-1,tail=0,ans=n,len=0;
        while(tail<n){
            while(head+1<n && mp.size()<dis){
                head++;
                len++;
                mp[a[head]]++;
            }
            ll s=mp.size();
            if(s==dis) ans=min(ans,len);
            if(head>=tail){
                mp[a[tail]]--;
                if(mp[a[tail]]==0) mp.erase(a[tail]);
                tail++;
                len--;
            }else{
                tail++;
                head=tail-1;
                len=0;
            }
        }
        cout<<ans<<endl;
    }    
}