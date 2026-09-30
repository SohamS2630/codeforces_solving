#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int op=0;
        if(n==1){
            cout<<0<<'
';   
        }
        else if(n==k){
            cout<<1<<'
';
        }
        else{
            while(n>1){
                op+=1;
                n=n-(k-1);
            }
            cout<<op<<'
';
        }
    } 
    return 0;
}
    
 