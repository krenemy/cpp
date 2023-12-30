#include <iostream>
#include <vector> 
#include <math.h>
// using namespace std;
// const int mod = 1e9+7;
// long long f(long long i,long long j){
//     if(i==0 && j==0) return 1;
//     if(i<0 || j<0) return 0;
//     return (f(i-1,j)%mod+f(i,j-1)%mod)%mod;
// }
// int main(){
//     int _t;
//     cin>>_t;
//     while(_t--){
//        long long N,M;
//        cin>>N>>M;
//        cout<<f(N,M)%mod<<endl;
//     }
// }
using namespace std;
const int mod = 1e9 + 7;

// Using memoization to avoid redundant calculations
unordered_map<long long, unordered_map<long long, long long> > memo;

long long f(long long i, long long j) {
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;

    if (memo[i].count(j))
        return memo[i][j];

    memo[i][j] = (f(i - 1, j) % mod + f(i, j - 1) % mod) % mod;
    return memo[i][j];
}

int main() {
    int _t;
    cin >> _t;
    while (_t--) {
        long long N, M;
        cin >> N >> M;
        cout << f(N, M) % mod << endl;
    }

}