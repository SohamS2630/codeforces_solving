#include <iostream>
#include<string>
using namespace std;
 
int main() {
    string s;
    int count=1;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count+=1;
        }
        if(count==7){
            cout<<"YES";
            return 0;
        }
        if(s[i]!=s[i+1]){
            count=1;
        }
    }
    cout<<"NO";
    return 0;
}