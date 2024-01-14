#include <iostream>
#include <vector> 
using namespace std;
typedef long long ll;
#include <stack>
signed main() {
    int _t;cin>>_t;
    string s;getline(cin,s);
    while(_t--){
        string s;getline(cin,s);
        stack<char> T;
        string U="";
        ll n=s.size();
        vector<char> dp(n);
        dp[n-1]=s[n-1];
        for(ll i=n-2;i>=0;i--){
            if(s[i]<dp[i+1]) dp[i]=s[i];
            else dp[i]=dp[i+1];
        }
        for(ll i=0;i<n;i++){
            if(i==0) T.push(s[i]);
            else{
                while(!T.empty() && T.top()<=dp[i]){
                    U+=T.top();
                    T.pop();
                }
                T.push(s[i]);
            }
        }
        while(!T.empty()){
            U+=T.top();T.pop();
        }
        for(ll i=0;i<U.size();i++) cout<<U[i];
        cout<<endl;
    }    
}
// signed main() {
//     int _t;cin>>_t;
//     string s;getline(cin,s);
//     while(_t--){
//         string s;getline(cin,s);
//         stack<char> T;
//         string U="";
//         for(ll i=0;i<s.size();i++){
//             if(i==s.size()-1) T.push(s[i]);
//             else{
//                 if(T.empty()) T.push(s[i]);
//                 else{
//                     if(s[i]<s[i+1] && s[i]<T.top()) U+=s[i];
//                     else T.push(s[i]);
//                 }
//             }
//         }
//         while(!T.empty()){char x=T.top();T.pop();U+=x;}
//         for(ll i=0;i<U.size();i++) cout<<U[i];cout<<endl;
//     }    
// }