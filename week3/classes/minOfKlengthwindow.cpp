#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <deque>
using namespace std;
typedef long long ll;
struct monotono_deque{
    deque<ll> dq;
    void insert(ll x){
       while(!dq.empty() && dq.back()<x) dq.pop_back();
       dq.push_back(x);
    }
    void remove(ll x){
        if(dq.front()==x) dq.pop_front();
    }
    ll getMin(){
        return dq.front();
    }
};
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     ll _t;cin>>_t;
    while (_t--) {
        ll n,k;cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        monotono_deque mt;
        for(ll i=0;i<n;i++){
            mt.insert(a[i]);
            if(i>=k) mt.remove(a[i-k]); // mt.erase(mt.find(a[i-k]));
            if(i>=k-1){
                cout<<mt.getMin()<<" ";
                // auto it = --mt.end();
                // cout<<*it<<" ";
            }
        }cout<<endl;


    }
}