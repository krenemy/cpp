#include <iostream>
#include <vector>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll q;cin>>q;
        set<ll> st;
        while(q--){
            string s;cin>>s;
            if(s=="add"){
                ll x;cin>>x;
                st.insert(x);
            }
            else if(s=="erase"){
                ll x;cin>>x;
                if(st.find(x)!=st.end()) st.erase(st.find(x));
            }
            else if(s=="find"){
                ll x;cin>>x;
                if(st.find(x)!=st.end()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(s=="print"){
                for (auto i=st.begin();i!=st.end();++i)cout<<*i<<" ";
                cout<<endl;
            }
            else if(s=="empty"){
                st.clear();
            }
        }
    }
}