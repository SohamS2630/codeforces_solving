#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int o=0,z=0;
        bool f = true;
        int uni = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                o++;
                f=true;
            }
            else{
                if(f){
                    uni++;
                    f=false;
                }
                z++;
            }
            
        }
        if(o>z || o>uni){
            cout<<"Yes"<<'
';
        }
        else{
            cout<<"No"<<"
";
        }
        
    }
 
    return 0;
}