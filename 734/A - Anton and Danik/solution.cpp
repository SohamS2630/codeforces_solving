#include <iostream>
#include<string>
using namespace std;
 
int main() {
    int n,A,B;
    cin>>n;
    A=0,B=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            A+=1;
        }
        else{
            B+=1;
        }
    }
    if(A>B){
        cout<<"Anton";
    }
    else if(B>A){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}