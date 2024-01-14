#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
#include <stack>
int check(int x,int n,vector<ll> arr){
   if(arr[x]<=arr[n-1]) return 1;
   else return 0;
}
signed main() {
    int _t;cin>>_t;
    while(_t--){
        ll n;cin>>n;
        vector<ll> a(n);
        ll sum=0;
        for(ll i=0;i<n;i++) cin>>a[i];
        ll lo=0,hi=n-1,ans=-1;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(check(mid,n,a)==1){
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