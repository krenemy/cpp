#include <iostream>
#include <vector> 
#include <math.h>
// using namespace std;
// const int mod = 1e9+7;
// long long f(long long i,long long j){
//     if(i==0 && j==0) return 1;
//     if(i<0 || j<0) return 0;
//     return (f(i-1,j)%mod+f(i,j-1)%mod)%mod;
// }
// int main(){
//     int _t;
//     cin>>_t;
//     while(_t--){
//        long long N,M;
//        cin>>N>>M;
//        cout<<f(N,M)%mod<<endl;
//     }
// }
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int binPow(long long a,long long b,long long mod){
    long long ans=1;
    while(b){
        if(b%2==1) ans=ans*a % mod;
        a=a*a % mod;
        b/=2;
    }
    return ans%mod;
}
int fact[1000001];
void factorial(){
    fact[0]=1;
    for(int i=1;i<1000001;i++){
        fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    factorial();
    int _t;cin>>_t;
    while (_t--) {
        int n,m;
        cin>>n>>m;
        int k=(n%mod+m%mod)%mod;
        int numo=fact[k];
        int demo=((fact[n]%mod)*(fact[m]%mod))%mod;
        int ans = (numo*binPow(demo,mod-2,mod))%mod;
        cout<<(ans%mod+mod)%mod<<"\n";
    }
}