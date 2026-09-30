#include <iostream>
using namespace std;
 
int main() {
    int n,o;
    cin>>n;
    while(n--){
        cin>>o;
        if(o==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
 
    return 0;
}