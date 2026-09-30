#include <iostream>
using namespace std;
 
int main() {
    int n,p;
    int count=0,prev=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        if(i==0){
            prev=p;
        }
        if(prev!=p){
            prev=p;
            count+=1;
        }
    }
    cout<<count+1;
 
    return 0;
}