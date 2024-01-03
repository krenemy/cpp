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
        multimap<string,ll> mp;
        ll q;cin>>q;
        while(q--){
            string s;
            cin>>s;
            if(s[0]=='a'){
                string s1;cin>>s1;
                ll x;cin>>x;
                mp.insert(pair<string, ll>(s1,x));
            }
            else if(s[0]=='p'){
                string s1;cin>>s1;
                bool found=false;
                auto it=mp.begin();
                for(it=mp.begin();it!=mp.end();++it){
                    if(it->first==s1){
                        found=true;break;
                    }
                }if(found==true) cout<<it->second<<endl;
                else cout<<"0"<<endl;
            }
            else if(s[0]=='e' && s.size()==5){
                string s1;cin>>s1;
               auto it = mp.find(s1); 
               if(it!=mp.end()) mp.erase(it); 
            }else if(s[0]=='e'){
                string s1;cin>>s1;
                mp.erase(s1);
            }
        }
    }
}