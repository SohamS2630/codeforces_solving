#include <iostream>
using namespace std;
 
int main() {
    int n,a,b,in;
    cin>>n;
    int maxi=0;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(i==1){
            maxi=b;
            in=b;
        }
        else{
            maxi=max(maxi,in-a+b);
            in=in-a+b;
        }
    }
    cout<<maxi;
    return 0;
}