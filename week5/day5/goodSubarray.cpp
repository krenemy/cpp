#include <iostream>
#include <vector> 
#include <map> 
#include <set> 
using namespace std;
#define int long long 
typedef long long ll;
int AtMostK(int n,int k,vector<int> &a){
        int head=-1,tail=0,ans=0,cntDis=0;
        int freq[100000]={0};
        while(tail<n){
            while(head+1<n && (cntDis<k || freq[a[head+1]]>=1)){
                head++;
                if(freq[a[head]]==0) cntDis++;
                freq[a[head]]++;
            }
            ans+=head-tail+1;
            if(head>=tail){
                freq[a[tail]]--;
                if(freq[a[tail]]==0) cntDis--;
                tail++;
            }else{
                tail++;head=tail-1;
            }
        }
        return ans;
    }
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;
    while(_t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        int ans = AtMostK(n,k,a)-AtMostK(n,k-1,a);
        cout<<ans<<endl;
    }    
}