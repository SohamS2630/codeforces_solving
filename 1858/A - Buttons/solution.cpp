#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ana=0,kat=0;
        if(a>b+c){
            cout<<"First"<<'
';
        }
        else if(c%2==0){
            ana+=((c/2)+a);
            kat+=((c/2)+b);
            if(ana>kat){
                cout<<"First"<<'
';
            }
            else if(ana<=kat){
                cout<<"Second"<<'
';
            }
            
        }
        else if(c%2!=0){
            int d=ceil(double(c)/2);
            ana+=(d+a);
            kat+=(c-d+b);
            if(ana>kat){
                cout<<"First"<<'
';
            }
            else if(ana<=kat){
                cout<<"Second"<<'
';
            }
        }
    }
 
    return 0;
}