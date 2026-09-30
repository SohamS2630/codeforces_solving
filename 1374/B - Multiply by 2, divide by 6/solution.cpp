#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        bool flag = true;
        while(flag){
            if(n==1){
                flag=false;
                cout<<count<<'
';
            }
            else if(n%6==0){
                n=n/6;
                count++;
            }
            else if(n%3==0){
                n=2*n;
                count++;
            }
            else{
                flag = false;
                cout<<-1<<'
';
            }
        }
    }
 
    return 0;
}