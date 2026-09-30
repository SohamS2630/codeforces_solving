#include <iostream>
using namespace std;
 
int main() {
    int n,h,k,w=0;
    cin>>n>>h;
    while(n--){
        cin>>k;
        if(k>h){
            w+=2;
        }
        else{
            w+=1;
        }
    }
    cout<<w;
 
    return 0;
}