#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d){
            cout<<0<<'
';
        }
        else if(b==d){
            if(c<a){
                cout<<a-c<<'
';
            }
            else{
                cout<<-1<<'
';
            }
        }
        else if(a==c){
            if(d>b){
                cout<<2*(d-b)<<'
';
            }
            else{
                cout<<-1<<'
';
            }
        }
        else{
            if(d>b){
                int op=d-b;
                if(a+op<c){
                    cout<<-1<<'
';
                }
                else if(a+op==c){
                    cout<<op<<'
';
                }
                else{
                    cout<<op+((a+op)-c)<<'
';
                }
            }
            else{
                cout<<-1<<'
';
            }
        }
 
    }
 
    return 0;
}