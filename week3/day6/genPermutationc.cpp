#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
using namespace std;
typedef long long ll;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,0);
    int fact=1;
    for(int i=1;i<=n;i++){
        v[i-1]=i;
        fact*=i;
    }
    while(fact--){
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        next_permutation(v.begin(),v.end());
    }
}