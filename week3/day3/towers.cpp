#include <iostream>
#include <vector>
#include <stack> 
#include <set> 
using namespace std;
typedef long long ll;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    while(_t--){
        ll k=0;
        ll n;cin>>n;
        vector<ll> a(n);for(ll i=0;i<n;i++) cin>>a[i];
        multiset<ll> ms;
        for(int i=0;i<n;i++){
            if(ms.size()==0) ms.insert(a[i]);
            else{
                if(ms.upper_bound(a[i])!=ms.end()){
                      ll x = *(ms.upper_bound(a[i]));
                      ms.erase(ms.find(x));
                      ms.insert(a[i]);
                      
                }
                 else {ms.insert(a[i]);}
            }
        }
         cout<<ms.size()<<endl;
    }    
}