#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int awake=-1;
        int ans=0;
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                awake=i+k;
            }
            else{
                if(i>awake){
                    ans++;
                }
            }
            i++;
        }
        cout<<ans<<'
';
    }
 
    return 0;
}