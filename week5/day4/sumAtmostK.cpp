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
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll head=-1,tail=0,sum=0,ans=0;
        while(tail<n){
            while(head+1<n && sum+a[head+1]<=k){
                head++;
                sum+=a[head];
            }
            ans+=head-tail+1;
            if(head>=tail){
                sum-=a[tail];
                tail++;
            }
            else{
                tail++;
                head=tail-1;
                sum=0;
            }
        }cout<<ans<<endl;
    }    
}