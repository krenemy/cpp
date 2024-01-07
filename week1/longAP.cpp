#include <iostream>
#include <vector> 
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
        int N;
        cin>>N;
        vector<long long> a(N);
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        long long diff=a[1]-a[0];
        int i=0;
        int mL=2;
        for(int j=2;j<N;j++){
            long long d=a[j]-a[j-1];
            if(d==diff){
                mL=max(mL,j-i+1);
            }
            else{
                diff=d;
                i=j-1;
            }
        }cout<<mL<<endl;
        
    }
    
}