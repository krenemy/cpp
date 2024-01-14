#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
#include <stack>
int check(int x,int n,int k,vector<ll> arr){
    // int np=0;
    // int npt=0;
    int np=1;
    int npt=x;
    for(int i=0;i<n;i++){
        // if(npt>=arr[i]) npt-=arr[i];
        // else{
        //     np++;
        //     if(np>k) return 0;
        //     npt=x;
        //     if(npt>=arr[i]) npt-=arr[i];
        //     else return 0;
        // }
        if(npt>=arr[i]) npt-=arr[i];
        else{
            np++;
            if(np>k) return 0;
            npt=x;
            if(npt>=arr[i]) npt-=arr[i];
            else return 0;
        }
    }return 1;
}
signed main() {
    int _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        ll sum=0;
        for(ll i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        ll lo=0,hi=sum,ans=-1;
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