#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int gaveto[n+1];
    int whogave[n+1];
    for(int i=1;i<=n;i++){
        cin>>gaveto[i];
    }
    for(int i=1;i<=n;i++){
        whogave[gaveto[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<whogave[i]<<" ";
    }
 
    return 0;
}