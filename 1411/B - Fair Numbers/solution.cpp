#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long og=n;
        while(n>0){
            int last=n%10;
            if(last!=0){
                if(og%last!=0){
                    og = og+1;
                    n=og;
                }
                else{
                    n=n/10;
                }
            }
            else{
                n=n/10;
            }
        }
        cout<<og<<'
';
    }
 
    return 0;
}