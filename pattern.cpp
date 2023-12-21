#include <iostream>
#include <vector> 
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
       	int N,M,P;
        cin>>N>>M>>P;
        for(int i=0;i<(M*P)+M+1;i++){
            cout<<"*";
        }cout<<endl;
        for(int i=0;i<N;i++){
            for(int j=0;j<P;j++){
                for(int k=0;k<M;k++){
                    cout<<"*";
                    if(i%2==0){
                        if(k%2==0){
                        for(int l=0;l<P;l++){
                            if(l==j) cout<<"\\";
                            else cout<<".";
                        }
                    }
                    else{
                        for(int l=0;l<P;l++){
                            if(P-l-1==j) cout<<"/";
                            else cout<<".";
                        }
                    }
                    }
                    else{
                        if(k%2==0){
                        for(int l=0;l<P;l++){
                            if(P-l-1==j) cout<<"/";
                            else cout<<".";
                        }
                    }
                    else{
                        for(int l=0;l<P;l++){
                            if(l==j) cout<<"\\";
                            else cout<<".";
                        }
                    }
                    }
                }cout<<"*"<<endl;
            }for(int i=0;i<(M*P)+M+1;i++){
                cout<<"*";
            }cout<<endl;
        }
        cout<<endl;
        
        
    }   
}





