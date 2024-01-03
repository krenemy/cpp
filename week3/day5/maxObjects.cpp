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
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<int> p(n);
        p[0]=a[0];
        for(ll i=1;i<n;i++){
            p[i]=p[i-1]+a[i];
        }
        while(q--){
            ll m;cin>>m;
        auto it = upper_bound(p.begin(),p.end(),m);
        if(it!=p.end()) cout<<it-p.begin()<<endl;
        else {
            cout<<n<<endl;
        }

        }
}