// #include <iostream>
// #include <vector> 
// #include <math.h>
// using namespace std;
// typedef long long ll;
// signed main(){
//     int _t;cin>>_t;
//     while (_t--) {
//         ll q;cin>>q;
//         vector<ll> a;
//         for(ll i=0;i<q;i++){
//             string s;
//             getline(cin,s);
//             if(s[0]=='a' && s[1]=='d' && s[2]=='d') a.push_back(s[4]-'0');
//             else if(s[0]=='r' && s[1]=='e' && s[2]=='m' && s[3]=='o' && s[4]=='v' && s[5]=='e') a.pop_back();
//             else if(s[0]=='p'&& s[1]=='r'&& s[2]=='i'&& s[3]=='n'&&s[4]=='t'){
//                 if(a.size()==0) cout<<"0"<<endl;
//                 else cout<<a[s[6]-'0']<<endl;
//             }
//             else if(s[0]=='c' && s[1]=='l' && s[2]=='e'&& s[3]=='a' && s[4]=='r') a.clear();
//         }
//     }
// }
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll _t;cin>>_t;
    while (_t--) {
        ll q;cin>>q;
        vector<ll> a;
        while(q--){
            string s;
            cin>>s;
            if(s[0]=='a'){ll x;cin>>x;a.push_back(x);}
            else if(s[0]=='r'){if(a.size()!=0) a.pop_back();}
            else if(s[0]=='p'){
                if(a.size()==0) cout<<"0"<<endl;
                else{ll x;cin>>x;
                if(x<a.size()){cout<<a[x]<<"\n";}
                else cout<<"0"<<"\n";}
            }
            else if(s[0]=='c') a.clear();
        }
    }
}
