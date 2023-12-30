#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
ll binPow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
inline int multiply(int a,int b){
    return (1LL*a*b%mod);
}
void solve() {
    int n,q,k;
    cin>>n>>q>>k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        ll y=binPow(k,i,mod);
        b[i]=multiply(a[i],y);
    }
    int ps2[n];
    ps2[0]=b[0];
    for(int i=1;i<n;i++){
        ps2[i]=(ps2[i-1]+b[i])%mod;
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        int ans=0;
        if(l==0){
            ans=ps2[r]%mod;
            ans=(ans%mod+mod)%mod;
        }
        else{
            ans=((ps2[r]-ps2[l-1])%mod+mod)%mod;
            int x = binPow(binPow(k,mod-2,mod),l,mod);
            ans=(multiply(ans,x)%mod+mod)%mod;
        }
        cout<<ans<<"\n";
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
