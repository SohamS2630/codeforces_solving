#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int right = 2*b;
        int left = a+c;
        if(right==left){
            cout<<"YES"<<'
';
        } 
        else if(right<left){
            if(left/right>0 && left%right==0){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<'
';
            }
        }
        else{
            if((right-c)/a>0 && (right-c)%a==0){
                cout<<"YES"<<"
";
            }
            else if((right-a)/c>0 && (right-a)%c==0){
                cout<<"YES"<<"
";
            }
            else{
                cout<<"NO"<<'
';
            }
        }
    }
 
    return 0;
}