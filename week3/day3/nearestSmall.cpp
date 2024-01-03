#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <utility>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--) {
        ll n;cin>>n;
        int arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        pair<int,int> p;
        p.first = 0;p.second=arr[0];
        cout<<"0"<<" ";
        for(ll i=1;i<n;i++){
            if(arr[i]<=p.second){
                p.first=i;p.second=arr[i];
                cout<<"0"<<" ";
            }else{
                cout<<p.first+1<<" ";
            }
        }cout<<endl;
        
    }
}