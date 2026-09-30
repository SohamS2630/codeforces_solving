#include <iostream>
#include<string>
#include<set>
using namespace std;
 
int main() {
    string user;
    cin>>user;
    set <int> ch;
    for(int i=0;i<user.size();i++){
        ch.insert(user[i]);
    }
    if(ch.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
 
}