#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     int _t;cin>>_t;
//     while(_t--){
//         ll n,k;cin>>n>>k;
//         vector<ll> a(n);
//         for(ll i=0;i<n;i++) cin>>a[i];
//         ll head=-1,tail=0,cntZero=0;
//         ll ans=0;
//         while(tail<n){
//             while(head+1<n && ((cntZero<k&&a[head+1]==0) || (cntZero<=k && a[head+1]==1))){
//                 head++;
//                 if(a[head]==0) cntZero++;
//             }
//             ans=max(ans,head-tail+1);

//             if(head>=tail){
//                 if(a[tail]==0) cntZero--;
//                 tail++;
//             }
//             else{
//                 tail++;
//                 head=tail-1;
//             }
//         }cout<<ans<<endl;
//     }    
// }
// int check(ll mid,ll k,ll n,vector<ll> &a){
//     ll head=-1,tail=0,len=0,cntZero=0;
//     while(tail<n){
//         while(head+1<n && len<mid && ((cntZero<=k && a[head+1]==1 )|| (cntZero<k && a[head+1]==0))){
//             head++;
//             len++;
//             if(a[head]==0) cntZero++;
//         }
//         if(len==mid) return 1;

//         if(head>=tail){
//             if(a[tail]==0) cntZero--;
//             len--;
//             tail++;
//         }
//         else{
//             tail++;
//             head=tail-1;
//         }
//     }return 0;
// }
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     int _t;cin>>_t;
//     while(_t--){
//         ll n,k;cin>>n>>k;
//         vector<ll> a(n);
//         for(ll i=0;i<n;i++) cin>>a[i];
//         ll lo=0,hi=n,ans=0;
//         while(lo<=hi){
//             ll mid = (lo+hi)/2;
//             if(check(mid,k,n,a)){
//                 ans=mid;lo=mid+1;
//             }else{
//                 hi=mid-1;
//             }
//         }
//         cout<<ans<<endl;
//     }    
// }

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll lo=0,hi=n,ans=0;
        while(lo<=hi){
            ll mid = (lo+hi)/2;
            if(check(mid,k,n,a)){
                ans=mid;lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }    
}