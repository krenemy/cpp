#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
#include <stack>
// ll check(ll x,ll n,ll m,ll k,vector<ll> &a,vector<ll> &b){
//     ll cnt=0;
//     for(ll i=0;i<n;i++){
//         cnt+=upper_bound(b.begin(),b.end(),x-a[i])-b.begin();
//     }
//     return cnt>=k;
// }
// signed main() {
//     int _t;cin>>_t;
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     while(_t--){
//         ll n,m,k;cin>>n>>m>>k;
//         vector<ll> a(n);
//         vector<ll> b(m);
//         for(ll i=0;i<n;i++) cin>>a[i];
//         for(ll i=0;i<m;i++) cin>>b[i];
//         if(n>m){
//             swap(n,m);
//             swap(a,b);
//         }
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         ll lo=a[0]+b[0],hi=a.back()+b.back(),ans=hi;
//         while(lo<=hi){
//             ll mid=(lo+hi)/2;
//             if(check(mid,n,m,k,a,b)==1){
//                 ans=mid;
//                 hi=mid-1;
//             }
//             else{
//                 lo=mid+1;
//             }
//         }
//         cout<<ans<<endl;
//     }    
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// ll check(ll x,ll n,ll m,ll k,vector<ll> a,vector<ll> b){
//     ll cnt=0;
//     for(ll i=0;i<n;i++){
//         cnt+=upper_bound(b.begin(),b.end(),x-a[i])-b.begin();
//     }
//     return cnt>=k;
// }
signed main() {
    int _t;cin>>_t;
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    while(_t--){
        ll n,m,k;cin>>n>>m>>k;
        vector<ll> a(n);
        vector<ll> b(m);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<m;i++) cin>>b[i];
        if(n>m){
            swap(n,m);
            swap(a,b);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll lo=a[0]+b[0],hi=a.back()+b.back();
        ll ans=hi;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            ll cnt=0;
    		for(ll i=0;i<n;i++){
    cnt+=upper_bound(b.begin(),b.end(),mid-a[i])-b.begin();
    }
            if(cnt>=k){
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