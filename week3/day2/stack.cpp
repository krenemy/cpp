#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll a;cin>>a;
        stack<ll> st;
        for(ll i=0;i<a;i++) {
            string s;cin>>s;
            if(s[0]=='a'){
                ll x;cin>>x;
                st.push(x);
            }
            else if(s[0]=='r'){
                if(st.size()!=0) st.pop();
            }else if(s[0]=='p'){
                if(st.size()!=0) cout<<st.top()<<"\n";
                else cout<<"0"<<"\n";
            }
        }
    }
}