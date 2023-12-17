#include <iostream>
#include <vector> 
#include <math.h>
using namespace std;

long long digSum(const string &number) {
    long long sum = 0;
    for (char digit : number) {
        int numValue = digit - '0';
        sum += numValue;
    }
    return sum;
}
int main() {
    int _t;
    cin>>_t;
    while(_t--){
        string number;
        cin>>number;
        long long result = digSum(number);
        cout << result << "\n";
    }

    return 0;
}
// long long digSum(long long n){
//     if(n==0) return 0;
//     return digSum(n/10)+n%10;
// }
// int main(){
//     int _t;
//     cin>>_t;
//     while(_t--){
//         long long n;
//         cin>>n;
//         cout<<digSum(n)<<"\n";
//         // long long s=0;
//         // while(n){
//         //     s+=n%10;
//         //     n=n/10;
//         // }cout<<s+n<<"\n";
//     }
//     return 0;
// }