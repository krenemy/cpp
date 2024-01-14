#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
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
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        stack<ll> st;
        vector<ll> ans;
        for(ll i=n-1;i>=0;i--){
            if(!st.empty()){
                if(st.top()>arr[i]) st.push(arr[i]);
                else{
                    while(!st.empty() && st.top()<arr[i]){
                        cout<<arr[i]<<" "<<st.top()<<"  ";
                        st.pop();
                    }
                    st.push(arr[i]);
                }
            }
            else{
                st.push(arr[i]);
            }
        }cout<<endl;

    
}
}