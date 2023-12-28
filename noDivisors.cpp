#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
long long div(long long n){
    long long x=0;
    for(long long i=0;i*i<=n;i++){
        if(n%i==0){
            x++;
            if(i*i!=n) x++;
        }
    }
    return x;
}
int main(){
    int _t;
    cin>>_t;
    while(_t--){
        long long n;
        cin>>n;
        cout<<div(n)<<"\n";
    }
}