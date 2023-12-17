#include <iostream>
#include <vector> 
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
        	cin>>arr[i];
        }
        long long x=0;
        for(long long i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                x+=arr[i-1]-arr[i];
                arr[i]=arr[i-1];
            }
        }cout<<x<<endl;
    }
    
}