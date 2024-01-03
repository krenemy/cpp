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
        int a;
        cin>>a;
        queue<int> q;
        for (int i=0;i<a;i++) {
            string s;
            cin>>s;
            if(s[0]=='a'){
                int x;
                cin>>x;
                q.push(x);
            }
            else if(s[0]=='r'){
                if(!q.empty()){
                    q.pop();
                }
            }else if(s[0]=='p'){
                if(!q.empty()){
                    cout<<q.front()<<"\n";
                }else{
                    cout<<"0"<<"\n";
                }
            }
        }
    }
}