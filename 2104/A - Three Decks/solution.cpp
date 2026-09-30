#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if((a+b+c)%3==0){
            int equal=(a+b+c)/3;
            if(a<=equal && b<=equal){
                cout<<"YES"<<"
";
            }
            else{
                cout<<"NO"<<"
";
            }
        }
        else{
            cout<<"NO"<<"
";
        }
 
    }
 
    return 0;
}