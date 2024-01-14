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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll ans=0;
        ll lo=0,hi=n-1;
        while(lo<=hi){
            if(a[lo]+a[hi]<=x){ans+=2*(hi-lo);lo++;}
            else{hi--;}
        }cout<<ans<<endl;
    }
}