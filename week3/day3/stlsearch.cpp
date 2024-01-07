#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     ll _t;cin>>_t;
    while (_t--) {
        vector<ll> v;
        ll n,q;cin>>n>>q;
        ll a[n];

        for(ll i=0;i<n;i++) cin>>a[i];
        while(q--){
            ll t,x;cin>>t>>x;
            if(t==1){
                 if(lower_bound(a,a+n,x)!=a+n) v.push_back(*lower_bound(a,a+n,x)); //cout<<*lower_bound(a,a+n,x)<<" ";
                else v.push_back(-1);//cout<<"-1"<<" ";
            }else if(t==2){
                if(upper_bound(a,a+n,x)!=a+n) v.push_back(*upper_bound(a,a+n,x));//cout<<*upper_bound(a,a+n,x)<<" ";
                else v.push_back(-1);//cout<<"-1"<<" ";
            }else if(t==3){
                v.push_back(upper_bound(a,a+n,x)-a);
                //cout<<upper_bound(a,a+n,x)-a<<" ";
                
            }else{
                v.push_back(lower_bound(a,a+n,x)-a);
                //cout<<lower_bound(a,a+n,x)-a<<" ";
            }
        }for(ll i=0;i<v.size();i++){
            i!=v.size()-1? cout<<v[i]<<" ":cout<<v[i]<<endl;
        }

    }
}