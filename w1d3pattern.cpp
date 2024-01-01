#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;
typedef long long ll;
void print_cell(ll i,ll j,ll n){
    ll d = max(abs(i-n/2),abs(j-n/2));
    if((d-n/2)%2==0) cout<<"*";
    else cout<<".";
}
void print_row(ll i,ll n){
    for(int j=0;j<n;j++){
        print_cell(i,j,n);
    }
}
signed main() {
    int _t;
    cin >> _t;
    while (_t--) {
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            print_row(i,n);
            cout<<endl;
        }

    }
}