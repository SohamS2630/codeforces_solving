#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    if(n%2==0){
        cout<<(1)*(n/2);
    }
    else{
        cout<<(1)*(n/2)-n;
    }
 
    return 0;
}