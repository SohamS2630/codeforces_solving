#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
        if(n-k==0 || n-k==1){
            cout<<"YES"<<'
';
        }
        else{
            int count=0;
            unordered_map<char,int> freq;
            for(char c:s){
                freq[c]++;
            }
            for(auto it: freq){
                if((it.second%2)!=0){
                    count++;
                }
            }
            if(count>k+1){
                cout<<"NO"<<'
';
            }
            else{
                cout<<"YES"<<'
';
            }
        }
    }
 
    return 0;
}