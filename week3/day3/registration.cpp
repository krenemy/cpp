#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <map>
#include <utility>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--) {
        int n;cin>>n;
        map<string,int> mp;
        while(n--){
            string s;
            cin>>s;
            mp[s]++;
            if(mp[s]==1) cout<<"OK"<<endl;
            else cout<<s<<mp[s]-1<<endl;
        }
    }
}