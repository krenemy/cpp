#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;i
nt main(){
    int _t;
    cin>>_t;
    while(_t--){
        int n;
        cin>>n;
        if(n==1) cout<<"NO"<<"\n";
        else{
        bool flag=false;
        for(int i=2;i*i<=n;i++){if(n%i==0){flag=true;break;}}
        if(flag) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
        }
    }
}