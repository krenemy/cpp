#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
int main()
{
    int _t;
    cin>>_t;
    while(_t--){
        long long N,M,P;
        cin>>N>>M>>P;
        vector<vector<long long> > a(N,vector<long long>(M));
        vector<vector<long long> > b(M,vector<long long>(P));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>a[i][j];
            }
        }
         for(int i=0;i<M;i++){
            for(int j=0;j<P;j++){
                cin>>b[i][j];
            }
        }
         for(int i=0;i<N;i++){
            for(int j=0;j<P;j++){
                long long s=0;
               for(int k=0;k<M;k++){
                s+=a[i][k]*b[k][j];
               }cout<<s<<" ";
            }cout<<"\n";
        }   
    }
    return 0;
}
