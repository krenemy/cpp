#include <iostream>
#include <vector>
#include <math.h>
#include <deque>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll a;cin>>a;
        deque<ll> dq;
        for(ll i=0;i<a;i++) {
            string s;cin>>s;
            if(s=="insertback"){
                ll x;cin>>x;
                dq.push_back(x);
            }
            else if(s=="insertfront"){
                ll x;cin>>x;
                dq.push_front(x);
            }
            else if(s=="eraseback"){
                if(dq.size()!=0) dq.pop_back();
            }
            else if(s=="erasefront"){
                if(dq.size()!=0) dq.pop_front();
            }
            else if(s=="printback"){
                if(dq.size()!=0) cout<<dq.back()<<"\n";
                else cout<<"0"<<"\n";
            }
            else if(s=="printfront"){
                if(dq.size()!=0) cout<<dq.front()<<"\n";
                else cout<<"0"<<"\n";
            }
            else if(s[0]=='p'){
                ll x;cin>>x;
                if(dq.size()!=0 && x<dq.size()) cout<<dq[x]<<endl;
                else cout<<"0"<<endl;
            }
        }
    }
}