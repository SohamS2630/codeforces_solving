#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string og = s;
    sort(s.begin(),s.end());
    if(og==s){
        cout<<"NO"<<'
';
    }
    else{
        cout<<"YES"<<'
';
        int l,r;
        char to_search;
        for(int i=0;i<s.size();i++){
            if(s[i]!=og[i]){
                l = i;
                to_search = s[i];
                break;
            }
        }
 
        for(int i=l+1;i<s.size();i++){
            if(og[i]==to_search){
                r = i;
                break;
            }
        }
        cout<<l+1<<" "<<r+1<<'
';
    }
 
 
 
    return 0;
}