#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
int main() {
    ll _t;cin>>_t;
    while(_t--){
        ll n,m,q;
        cin>>n>>m>>q;
        ll a[n];
        vector<ll> s;
        for(ll i=0;i<n;i++) cin>>a[i];
        while(m--){
            ll l,r;
            cin>>l>>r;
            l--;r--;
            
        }
        
        vector<ll> ans(q,0);
        for(ll i=0;i<ans.size();i++){cin>>ans[i];
        if(s.size()>ans[i]-1) cout<<s[ans[i]-1]<<" ";
        else cout<<"-1"<<" ";}
        cout<<endl;

    }

}