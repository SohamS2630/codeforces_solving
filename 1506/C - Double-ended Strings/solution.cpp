#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        vector<string> commons;
        if(a.size()<=b.size()){
            for(int i=0;i<a.size();i++){
                for(int j=i;j<a.size();j++){
                    string sub = a.substr(i,j-i+1);
                    if(b.find(sub) != std::string::npos){
                        commons.push_back(sub);
                    }
                }
            }
        }
        else{
            for(int i=0;i<b.size();i++){
                for(int j=i;j<b.size();j++){
                    string sub = b.substr(i,j-i+1);
                    if(a.find(sub) != std::string::npos){
                        commons.push_back(sub);
                    }
                }
            }
        }
        
        if(commons.empty()){
            cout<<a.size()+b.size()<<'
';
        }
        else{
            int len = commons[0].size();
            for(auto &it:commons){
                if(it.size()>len){
                    len = it.size();
                }
            }
            cout<<(a.size()-len)+(b.size()-len)<<'
';
        }
 
 
 
        
    }
 
    return 0;
}