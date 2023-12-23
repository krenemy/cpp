#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
void binPow(long long a,long long b,long long mod){
    long long ans=1;
    while(b){
        if(b%2==1) ans=ans*a % mod;
        a=a*a % mod;
        b/=2;
    }
    cout<<ans<<"\n";
}
int main(){
    int _t;
    cin>>_t;
    while(_t--){
       long long a,b;
       cin>>a>>b;
       long long mod = 1e9+7;
       binPow(a,b,mod);

    }

    return 0;
}
