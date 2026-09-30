#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool one = s.find("2026") != std::string::npos;
        bool two = !(s.find("2025") != std::string::npos);
        if(one || two){
            cout<<0<<'
';
        }
        else{
            cout<<1<<'
';
        }
 
    }
 
    return 0;
}