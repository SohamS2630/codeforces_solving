#include <iostream>
#include<string>
using namespace std;
 
int main() {
    int x=0;
    int n;
    cin>>n;
    string st;
    while(n--){
        cin>>st;
        if((st=="++X")|| (st=="X++")){
            x+=1;
        }
        else{
            x-=1;
        }
    }
    cout<<x;
 
    return 0;
}