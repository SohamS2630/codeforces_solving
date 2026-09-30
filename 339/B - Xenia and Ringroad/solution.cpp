#include <iostream>
using namespace std;
 
int main() {
    int n,m,a;
    long long int at=1;
    long long int time=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a;
        if(i==1){
            time+=(a-1);
            at=a;
        }
        else if(a<at){
            time+=(n-at+a);
            at=a;
        }
        else if(a>at){
            time+=(a-at);
            at=a;
        }
 
    }
    cout<<time;
 
    return 0;
}