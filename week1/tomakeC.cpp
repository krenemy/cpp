#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a%b);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
        long long A,B,C;
        cin>>A>>B>>C;
        long long gc=gcd(A,B);
        if(C%gc==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    
}