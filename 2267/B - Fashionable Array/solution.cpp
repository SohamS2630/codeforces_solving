#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        map<int,int, std::greater<int>> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            mp[a]++;
        }
        vector<int> ans;
 
        while(!mp.empty()){
            for(auto it=mp.begin();it!=mp.end();){
                ans.push_back(it->first);
                it->second--;
                if(it->second==0){
                    it=mp.erase(it); 
                }else{
                    it++;
                }
            }
        }
 
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<'
';
        
 
    }
 
    return 0;
}