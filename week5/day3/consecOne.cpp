#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
int check(int x,int n,int k,vector<ll> arr){
    
}
signed main() {
    int _t;cin>>_t;
    string s;getline(cin,s);
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll l=0,lo=0;
        for(ll i=0;i<n;i++){
            if(a[i]==0) l=0;
            else l++,lo=max(lo,l);
        }
        ll hi=n,ans=lo;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(check(mid,n,k,a)==1){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
    }    
}