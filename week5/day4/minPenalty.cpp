#include <iostream>
#include <vector> 
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     int _t;cin>>_t;
//     ll arr[1000001]={0};
//     while(_t--){
//         ll n,k;cin>>n>>k;
//         ll a[n];
//         for(ll i=0;i<n;i++) cin>>a[i];
//         ll head=-1,tail=0,len=0,cntDis=0;
//         ll ans=n;
//         while(tail<n){
//             while(head+1<n && len<k){
//                 head++;
//                 len++;
//                 if(arr[a[head]]==0) cntDis++;
//                 arr[a[head]]++;
//             }
//            if(ans>cntDis && len==k) ans=cntDis;
//             if(head>=tail){
//                 if(arr[a[tail]]==1) cntDis--;
//                 arr[a[tail]]--;
//                 len--;
//                 tail++;
//             }
//             else{
//                 tail++;
//                 head=tail-1;
//                 len--;
//             }
//         }
//         cout<<ans<<endl;
//     }    
// }
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    ll arr[1000001]={0};
    while(_t--){
        ll n,k;cin>>n>>k;
        ll a[n];
        ll cntDis=0;
        //unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<k;i++) {
            if(arr[a[i]]==0) cntDis++;
            arr[a[i]]++;
        }
        ll head=k,tail=0;
        ll ans=cntDis;
        while(head<n){
            arr[a[tail]]--;
            if(arr[a[tail]]==0) cntDis--;;
            arr[a[head]]++;
            if(arr[a[head]]==1) cntDis++;
            head++;tail++;
            ans=min(ans,cntDis);
        }
        cout<<ans<<endl;
    }    
}