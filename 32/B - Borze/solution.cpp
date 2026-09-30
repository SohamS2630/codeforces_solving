#include <iostream>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    string a;
    int i=0;
    while(i<s.size()){
        if(s[i]=='.'){
            a+='0';
            i++;
        }
        else if(s[i]=='-'){
            if(s[i+1]=='-'){
                a+='2';
            }
            else if(s[i+1]=='.'){
                a+='1';
            }
            i+=2;
        }
    }
    cout<<a<<'
';
 
    return 0;
}