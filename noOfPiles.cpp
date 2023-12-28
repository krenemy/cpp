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
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        long long gc = gcd(a[0],a[1]);
        for(int i=2;i<n;i++){
            gc=gcd(gc,a[i]);
        }
        if(gc<=1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        
    }
    
}