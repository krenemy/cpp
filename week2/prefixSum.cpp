#include <iostream>
#include <vector> 
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long N,Q;
    long long mod=1e9+7;
    cin>>N>>Q;
    vector<long long> arr(N);
    vector<long long> pre(N);
    for(long long i=0;i<N;i++) cin>>arr[i];
    pre[0]=arr[0];
    for(long long i=1;i<N;i++) pre[i]=(arr[i]+pre[i-1]);
    while(Q--){
        long long L,R;
        cin>>L>>R;
        L--;
        R--;
        if(L==0) cout<<(pre[R]%mod+mod)%mod<<endl;
        else cout<<((pre[R]-pre[L-1])%mod+mod)%mod<<endl;
    }

    
}
