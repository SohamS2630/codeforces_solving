#include <iostream>
#include<string>
using namespace std;
 
int main() {
    string s;
    string h="hello";
    cin>>s;
    if(s.size()<5){
        cout<<"NO";
        return 0;
    }
    int j=0;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==h[j] && j<=4){
            count+=1;
            j+=1;
        }
        if(count==5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}