#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        bool flag=true;
        long long i=x+x;
        while(i<y){
            if(y%i!=0){
                cout<<"YES"<<'
';
                flag=false;
                break;
            }
            i+=x;
        }
        if(flag){
            cout<<"NO"<<'
';
        }
        
    }
 
    return 0;
}