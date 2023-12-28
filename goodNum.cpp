#include <iostream>
#include <vector> 
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long N,K,Q;
    int n = 1e6+10;
    cin>>N>>K>>Q;
    vector<long long> pre(n,0);
    vector<long long> ppp(n,0);
    while(N--){
        long long L1,R1;
        cin>>L1>>R1;
        L1--;R1--;
        pre[L1]++;
        pre[R1+1]--;
    }
    ppp[0]=pre[0];
    for(int i=1;i<N;i++){ppp[i]=pre[i]+ppp[i-1];cout<<ppp[i];}
    while(Q--){
        long long L,R;
        cin>>L>>R;
        L--;R--;
        // int k=0;
        // for(int i=L;i<=R;i++){
        //     if(ppp[i]>=K) k++;
        // }cout<<k<<endl;
    }
}
