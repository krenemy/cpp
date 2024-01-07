#include <iostream>
#include <vector>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,q;cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=1;i<n;i++) a[i]+=a[i-1];
    while(q--){
        	ll m;cin>>m;
        	auto it = upper_bound(a,a+n,m)-a;
			cout<<it<<endl;

        }
}