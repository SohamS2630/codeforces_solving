#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                cnt++;
                maxi = max(cnt,maxi);
            }
            else if(s[i]=='*'){
                cnt=0;
            }
        }
        cout<<ceil(double(maxi)/2)<<'
';
    }
 
    return 0;
}