#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll q;cin>>q;
        map<string,ll> mp;
        while(q--){
            string s;cin>>s;
            if(s[0]=='a'){
                string s1;cin>>s1;
                ll x;cin>>x;
                mp[s1]=x;
            }
            else if(s[0]=='e'){
                string s1;cin>>s1;
                mp.erase(s1);
            }
            else if(s[0]=='p'){
                string s1;cin>>s1;
                if(mp.find(s1)!=mp.end()) cout<<mp[s1]<<endl;
                else cout<<"0"<<endl;
            }
        }
    }
}