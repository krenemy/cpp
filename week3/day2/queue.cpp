#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll a;cin>>a;
        queue<ll> q;
        for(ll i=0;i<a;i++) {
            string s;cin>>s;
            if(s[0]=='a'){
                ll x;cin>>x;
                q.push(x);
            }
            else if(s[0]=='r'){
                if(q.size()!=0) q.pop();
            }else if(s[0]=='p'){
                if(q.size()!=0) cout<<q.front()<<"\n";
                else cout<<"0"<<"\n";
            }
        }
    }
}