#include <iostream>
#include <vector>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     ll _t;cin>>_t;
    while (_t--) {
        ll q;cin>>q;
        set<ll> s;
        while(q--){
            ll t,x;cin>>t>>x;
            if(t==1) s.insert(x);
            else if(t==2){
                if(s.size()==0) cout<<x<<endl;
                else{
                    auto it=--s.end();
                    if(*it<x) cout<<x<<endl;
                    else if(*it==x) cout<<x+1<<endl;
                    else{
                        ll ans=*s.lower_bound(x);
                        if(ans!=x) cout<<x<<endl;
                        else{
                            for(auto it=s.lower_bound(x);it!=s.end();++it){
                            if(ans==*it) ans++;
                            else break;
                            }cout<<ans<<endl;
                        }
                    }
                }
            }

        }

    }
}