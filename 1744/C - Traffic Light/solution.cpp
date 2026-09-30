#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        string s;
        cin>>c>>s;
        string m = s+s;
        vector<int> v;
        vector<int> e;
        for(int i =0;i<m.size();i++){
            if(m[i]==c && i<s.size()){
                v.push_back(i);
            }
            if(m[i]=='g'){
                e.push_back(i);
            }
        }
 
        int i=0;
        int j=0;
        int maxi=0;
        while(i<v.size()){
            if(e[j]-v[i]>=0){
                maxi=max(maxi,e[j]-v[i]);
                i++;
            }
            else if(e[j]-v[i]<0){
                j++;
            }
        }
        cout<<maxi<<'
';
         
 
    }
 
    return 0;
}