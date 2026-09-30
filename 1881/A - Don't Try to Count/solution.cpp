#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string x,s;
        cin>>n>>m;
        cin>>x;
        cin>>s;
        bool flag=true;
        if(x.find(s) != std::string::npos){
            cout<<0<<'
';
            flag=false;
        }
        else{
            for(int i=0;i<5;i++){
                x=x.append(x);
                if(x.find(s) != std::string::npos){
                    cout<<i+1<<'
';
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<-1<<'
';
        }
 
    }
    return 0;
}