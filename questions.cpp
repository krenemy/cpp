#include <iostream>
#include <vector> 
using namespace std;
int main(){
    int _t;
    cin>>_t;
    while(_t--){
       int N,R,C,X,Y;
       cin>>N>>R>>C>>X>>Y;
       vector<vector<int> > arr(R,vector<int>(C,0));
       arr[X][Y]=1;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++){
           if(s[i]=='N'){
             while(X>=0 && arr[X][Y]!=0){
                   X--;}
               arr[X][Y]=1;
           }
           else if(s[i]=='S'){
               while(X<R && arr[X][Y]!=0){
                   X++;}
               arr[X][Y]=1;
           }
           else if(s[i]=='W'){
                while(Y>=0 && arr[X][Y]!=0){
                   Y--;}
               arr[X][Y]=1;
           }
           else if(s[i]=='E'){
                while(Y<C && arr[X][Y]!=0){
                  Y++;}
              arr[X][Y]=1;
           }
       }
       cout<<X<<" "<<Y<<endl;
    }
    return 0;
}