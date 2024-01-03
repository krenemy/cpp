#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--) {
        ll n;cin>>n;
       vector<ll> a(n);
       for(ll i=0;i<n;i++) cin>>a[i];
    	sort(a.begin(),a.end());
        int s=a[0];
        int sm=-1;
        for(auto i:a){
            if(i>s){sm=i;break;}
        }
        cout<<sm<<"\n";
    }
}