#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    while (_t--) {
        string s;
        cin>>s;
        ll d=0;ll ans=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='(') d+=1;
            else if(s[i]=')'){
                if(d>0) d-=1;
                else{ans+=1;d=0;}
            }
        }cout<<ans+d<<endl;
    }
}
