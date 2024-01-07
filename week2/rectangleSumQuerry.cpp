#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,m,q;cin>>n>>m>>q;
    ll a[n][m];
    for(ll i=0;i<n;i++){for(ll j=0;j<m;j++) cin>>a[i][j];}
    vector<vector<ll> > p(n+1,vector<ll>(m+1,0));
    for(ll i=1;i<=n;i++){for(ll j=1;j<=m;j++)p[i][j]=(a[i-1][j-1]+p[i-1][j]+p[i][j-1]-p[i-1][j-1])%mod;}
    while(q--){
        ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        ll ans=p[x2][y2]-p[x2][y1-1]-p[x1-1][y2]+p[x1-1][y1-1];
        cout<<(ans%mod+mod)%mod<<endl;

    }

}