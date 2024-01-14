#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
#include <stack>
// int arr[100001];
// int n,k;
// bool check(int maxDiffAllowed){
// int pointsRequired = 0;
// int i = 1;
// while(i<n){
//  pointsRequired+=(arr[i]-arr[i-1])/maxDiffAllowed ;
//  i++;
// }
// return pointsRequired<=k;
// }
// signed main()
// {
// ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// int testcases;
// cin>>testcases;
// while(testcases--){
//  cin>>n>>k;
//  for(int i=0;i<n;i++)
//   cin>>arr[i];
//  int low = 1,high = 1e9;
//  int ans = high;
//  while(low<=high){
//   int mid = (low+high)/2;
//   if(check(mid))
//    ans = mid,high = mid-1;
//   else
//    low = mid+1;
//  }
//  cout<<ans<<"\n";
// }
// }
ll check(ll x,ll n,ll k,vector<ll> a){
    ll students=0;
    for(ll i=1;i<n;i++){
        if(x!=0) students+=((a[i]-a[i-1]+x-1)/x)-1;
    }return students<=k;
}
signed main() {
    int _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        ll maxNeighbourSep=0;
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        for(ll i=1;i<n;i++) maxNeighbourSep=max(maxNeighbourSep,a[i]-a[i-1]);
        ll lo=0,hi=maxNeighbourSep,ans=1;
         while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(check(mid,n,k,a)==1){
                if(mid!=0) ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
    }    
}