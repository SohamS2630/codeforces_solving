#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        bool f = false;
        if(a==0 && b==0){
            f = true;
        }
        int x=0,y=0;
        for(int j=0;j<100 && !f;j++){
            for(int i=0;i<n;i++){
                if(s[i]=='N'){
                    y+=1;
                }
                else if(s[i]=='S'){
                    y-=1;
                }
                else if(s[i]=='E'){
                    x+=1;
                }
                else if(s[i]=='W'){
                    x-=1;
                }
                if(x==a && y==b){
                    f = true;
                    break;
                }
            }
        }
        if(f){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }
        
        
    }
 
    return 0;
}