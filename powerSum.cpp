#include <iostream>
#include <vector> 
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long N,Q,K;
    long long mod=1e9+7;
    cin>>N>>Q>>K;
    vector<long long> arr(N);
    vector<long long> brr(N);
    vector<long long> pre(N);
    vector<long long> qre(N);
    for(long long i=0;i<N;i++){cin>>arr[i];brr[i]=i*arr[i];}
    pre[0]=arr[0];
    for(long long i=1;i<N;i++) pre[i]=(arr[i]+pre[i-1]);
    qre[0]=brr[0];
    for(long long i=1;i<N;i++) qre[i]=(brr[i]+qre[i-1]);
    while(Q--){
        long long L,R;
        cin>>L>>R;
        L--;
        R--;
        if(L==0){
            long long ans=(qre[R]+(1-L)*pre[R]);
            cout<<(ans%mod+mod)%mod<<endl;
            }
        else {
            long long ans = (qre[R]-qre[L-1]+(1-L)*(pre[R]-pre[L-1]));
            cout<<((ans)%mod+mod)%mod<<endl;
            }
    }

    
}
