#include <iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
 
int main() {
    string str;
    string ans="";
    cin>>str;
    for(char c:str){
        c=tolower(c);
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y' ){
            ans+=".";
            ans+=c;
        }
    }
    std::cout<<ans;
    return 0;
}