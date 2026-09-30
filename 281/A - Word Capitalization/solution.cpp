#include <iostream>
using namespace std;
#include <string>
#include<cctype>
int main() {
    string name;
    cin>>name;
    name[0]=toupper(name[0]);
    cout<<name;
 
    return 0;
}