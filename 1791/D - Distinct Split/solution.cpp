#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int pre[n];
        int suf[n];
        set<char> ss;
        for(int i=0;i<n;i++){
            ss.insert(s[i]);
            pre[i]=ss.size();
        }
        ss.clear();
        for(int i=n-1;i>=0;i--){
            ss.insert(s[i]);
            suf[i]=ss.size();
        }
 
        int  maxi = -1;
        for(int i=0;i<n-1;i++){
            if(pre[i]+suf[i+1]>maxi){
                maxi = pre[i]+suf[i+1];
            }
        }
        cout<<maxi<<'
';
 
    }
 
    return 0;
}