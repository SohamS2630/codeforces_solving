#include <iostream>
#include<string>
using namespace std;
 
int main() {
    string n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1.size();i++){
        if(n1[i]==n2[i]){
            n1[i]='0';
        }
        else{
            n1[i]='1';
        }
    }
    cout<<n1;
    return 0;
}