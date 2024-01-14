#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
#include <stack>
void binary_search(ll lo,ll hi,ll y,vector<ll> arr){
    ll ans=-1;
     while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(arr[mid]==y){
                ans=mid;
                hi=mid-1;
                cout<<mid+1<<" ";
            }
            else if(arr[mid]>ans){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
}
void rev_binary_search(ll lo,ll hi,ll y,vector<ll> arr){
    ll ans=-1;
     while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(arr[mid]==y){
                ans=mid;
                hi=mid-1;
                cout<<ans+1<<" ";
            }
            else if(arr[mid]<ans){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
}
signed main() {
    int _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll lo=0,hi=n-1,ans=-1;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(mid==n-1){ans=1;break;} 
            if(a[mid]>a[mid+1]){ //check function 
                ans=mid; 
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
       while(k--){
            ll x;cin>>x;
            if(a[ans]==x){
                cout<<ans+1<<endl;
            }
            else{
            binary_search(0,ans,x,a);
            rev_binary_search(ans+1,n-1,x,a);
            cout<<endl;
            }
        }
    }    
}