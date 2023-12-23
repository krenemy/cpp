#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;

int main(){
    int _t;
    cin>>_t;
    while(_t--){
       int Q, N;
        cin >> Q >> N;
        if(N==1){
            cout<<"YES"<<"\n";
        }
        else if (Q == 1) {
            bool flag = false;
            for (int i = 2; i * i <= N; i++) {
                long long a = i * i;
                if (a == N) {
                    flag = true;
                    break;
                }
            }
            if (flag) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        } else {
            bool flag = false;
            for (int i = 2; i * i * i <= N; i++) {
                long long a = i * i * i;
                if (a == N) {
                    flag = true;
                    break;
                }
            }
            if (flag) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
        
    }
}