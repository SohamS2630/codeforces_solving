#include <iostream>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int mini=INT_MAX;
        while(x>0){
            int last_digi=x%10;
            mini=min(last_digi,mini);
            x=x/10;
        }
        cout<<mini<<'
';
 
 
    }
 
    return 0;
}