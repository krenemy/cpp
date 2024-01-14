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
        set<ll> s;
        while(q--){
            string st;cin>>st;
            if(st=="add"){
                ll x;cin>>x;
                s.insert(x);
            }
            else if(st=="remove"){
                ll x;cin>>x;
                if(s.find(x)!=s.end()) s.erase(x);
            }
            else if(st=="find"){
                ll x;cin>>x;
                if(s.find(x)!=s.end()){cout<<s.find(x)-s.begin()<<endl;}
                else cout<<"-1"<<endl;

            }
            else if(st=="findpos"){
                ll x;cin>>x;
                if(s.find(x)!=s.end()){cout<<*s.find(x)<<endl;}
                else{cout<<*s.lower_bound(x)<<endl;}
            }
        }
    }
}