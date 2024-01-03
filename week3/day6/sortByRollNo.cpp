#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     ll _t;cin>>_t;
    while (_t--) {
        ll q;cin>>q;
        set<pair<int,string> > st;
        while(q--){
            string s1;cin>>s1;
            ll x;cin>>x;
            st.insert(pair<ll,string>(x,s1));
        }
        for(auto it=st.begin();it!=st.end();++it){
            cout<<it->second<<" "<<it->first<<endl;
        }
    }
}