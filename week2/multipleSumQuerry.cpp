 #include <iostream>
 #include <vector> 
using namespace std;
const int mod = 1e9 + 7;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,Q;
    cin>>N>>Q;
    int arr[N];
    int brr[Q];
    for(int i=0;i<N;i++){
        cin>>arr[i];
        brr[i]=1ll*i*arr[i]%mod;
    }
    int pre[N];
    int qre[N];
    pre[0]=arr[0];
    qre[0]=brr[0];
    for(int i=1;i<N;i++){
        pre[i]=(pre[i-1]+arr[i])%mod;
        qre[i]=(qre[i-1]+brr[i])%mod;
    }
    while(Q--){
        int L,R;
        cin>>L>>R;
        L--;R--;
        int ans=0;
        if(L==0){
            ans=qre[R]%mod;
            ans=((ans+pre[R])%mod+mod)%mod;
        }
        else{
            ans=((qre[R]-qre[L-1])%mod+mod)%mod;
            int x=((pre[R]-pre[L-1])%mod+mod)%mod;
            ans=((ans+(1ll*x*(1-L)%mod))%mod+mod)%mod;
        }
        cout<<ans<<"\n";
    }
}


// #include <iostream>
// #include <vector> 
// using namespace std;
// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     long long N,Q;
//     long long mod=1e9+7;
//     cin>>N>>Q;
//     vector<long long> arr(N);
//     vector<long long> brr(N);
//     vector<long long> pre(N);
//     vector<long long> qre(N);
//     for(long long i=0;i<N;i++){cin>>arr[i];brr[i]=1ll*i*arr[i]%mod;}
//     pre[0]=arr[0];
//     for(long long i=1;i<N;i++) pre[i]=(arr[i]+pre[i-1])%mod;
//     qre[0]=brr[0];
//     for(long long i=1;i<N;i++) qre[i]=(brr[i]+qre[i-1])%mod;
//     while(Q--){
//         long long L,R;
//         cin>>L>>R;
//         L--;R--;
//         if(L==0){
//             long long ans=(qre[R]+1ll*(1-L)*pre[R]);
//             cout<<(ans%mod+mod)%mod<<"\n";
//             }
//         else{
//             long long ans = (qre[R]-qre[L-1]+1ll*(1-L)*(pre[R]-pre[L-1]));
//             cout<<((ans)%mod+mod)%mod<<"\n";
//             }
//     }

    
// }
