#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int t=r/(b+1);
        int rem=r%(b+1);
        string f;
        string s;
        string m;
        for(int i=0;i<t;i++){
            f+='R';
        }
        for(int i=0;i<rem;i++){
            m+=f+'R'+'B';
        }
        for(int i=0;i<b-rem;i++){
            s+=f+'B';
        }
        s+=f;
        cout<<m+s;
        cout<<'
';
 
    }
 
    return 0;
}