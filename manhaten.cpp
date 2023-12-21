#include <iostream>
#include <vector> 
#include <iomanip>
#include <math.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
       int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double man=(abs(x2-x1)+abs(y2-y1));
    double euc=(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    cout<<setprecision(7)<<fixed<<euc<<" ";
    cout<<setprecision(7)<<fixed<<man<<"\n";
        
    }
    
}