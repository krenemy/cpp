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
        multiset<ll> ms;
        while(q--){
            string s;cin>>s;
            if(s=="add"){
                ll x;cin>>x;
                ms.insert(x);
            }
            else if(s=="erase"){
                ll x;cin>>x;
                if(ms.find(x)!=ms.end()) ms.erase(ms.find(x));
            }
            else if(s=="eraseall"){
                ll x;cin>>x;
                if(ms.find(x)!=ms.end()) ms.erase(x);
            }
            else if(s=="find"){
                ll x;cin>>x;
                if(ms.find(x)!=ms.end()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(s=="count"){
                ll x;cin>>x;
                if(ms.find(x)!=ms.end()) cout<<ms.count(x)<<endl;
                else cout<<"0"<<endl;
            }
            else if(s=="print"){
                for (auto i=ms.begin();i!=ms.end();++i)cout<<*i<<" ";
                cout<<endl;
            }
            else if(s=="empty"){
                ms.clear();
            }
        }
    }
}