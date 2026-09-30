#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        if(n<2*m){
            cout<<"NO"<<'
';
        }
        else if(b[0]<a[0] || b[m-1]>a[n-1]){
            cout<<"NO"<<'
';
        }
        else{
            bool f = true;
            for(int i=0;i<m;i++){
                if(!(b[i]>a[i]) || !(b[i]<a[n-m+i])){
                    cout<<"NO"<<'
';
                    f = false;
                    break;
                }
            }
            if(f){
                cout<<"YES"<<'
';
            }
        }
 
 
    }
 
    return 0;
}