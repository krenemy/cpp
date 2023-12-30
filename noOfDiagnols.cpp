#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
const int mod = 1e9+7;
int main(){
    int _t;
    cin>>_t;
    while(_t--){
       long long n;
       cin>>n;
       long long ans = 1ll*n*(n-3)/2;
       cout<<((ans%mod)+mod)%mod<<endl;
    }
}