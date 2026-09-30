#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || a==c){
            cout<<0<<'
';
        }
        else{
            int mini = min(min(abs(a-b),abs(b-c)),abs(a-c));
            cout<<mini<<'
';
        }
    }
 
    return 0;
}