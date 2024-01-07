#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <utility>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll a;cin>>a;
        priority_queue<ll> pq;
        for(ll i=0;i<a;i++) {
            string s;cin>>s;
            if(s=="add"){
                ll x;cin>>x;
                pq.push(x);
            }
            else if(s=="remove"){
                if(!pq.empty()) pq.pop();
            }
            else if(s=="print"){
                if(!pq.empty()) cout<<pq.top()<<endl;
                else cout<<"0"<<endl;
            }
        }
    }
}