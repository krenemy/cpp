#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--) {
        ll q;
        cin>>q;
        stack<ll> s1;
        stack<ll> s2;
        while(q--){
            string s;
            cin>>s;
            if(s[1]=='u'){
                ll x;cin>>x;
                s1.push(x);
            }
            else if(s[1]=='o'){
               if(!s2.empty()){
                    cout<<s2.top()<<endl;
                    s2.pop();
               }
               else{
                 while(!s1.empty()){
                    int x=s1.top();
                    s2.push(x);
                    s1.pop();
                }
                cout<<s2.top()<<endl;
                s2.pop();
               }
            }
            else if(s[0]=='f'){
                if(!s2.empty()){
                    cout<<s2.top()<<endl;
                }
                else{
                while(!s1.empty()){
                    int x=s1.top();
                    s2.push(x);
                    s1.pop();
                }
                cout<<s2.top()<<endl;
                }
            }
        }
    }
}