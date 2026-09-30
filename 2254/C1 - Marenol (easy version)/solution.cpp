#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int ea=0,oa=0;
        int eb=0,ob=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                if(i%2==0){
                    ea++;
                }
                else{
                    oa++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]=='1'){
                if(i%2==0){
                    eb++;
                }
                else{
                    ob++;
                }
            }
        }
        if(ea==eb && oa==ob){
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