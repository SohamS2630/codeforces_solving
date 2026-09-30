#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int r,x,d,n;
        cin>>r>>x>>d>>n;
        string s;
        cin>>s;
        int i=0;
        while(n){
            if(r>=x && s[i]=='1'){
                r=r-d;
                i++;
            }
            else if(r>=x && s[i]=='2'){
                n--;
                i++;
            }
            else{
                break;
            }
        } 
        cout<<n<<'
';
 
    }
 
    return 0;
}