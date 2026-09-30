#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string p;
        p += s[0];
        for (int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                p += s[i];
            }
        }
        int mini = p.size();
        int del = 0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]==s[i+1]){
                if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                    del = 2;
                }
            }
            else if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                del = max(1,del);
            }
        }
        cout<<p.size()-del<<'
';
    }
 
    return 0;
}