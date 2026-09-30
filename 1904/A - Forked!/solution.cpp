#include <iostream>
#include <set>
#include <vector>
#include <utility>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk,xq,yq;
        cin>>xk>>yk;
        cin>>xq>>yq;
 
        set<pair<int,int>> q_att;
        set<pair<int,int>> k_att;
        vector<int> dx = {1,1,-1,-1}; 
        vector<int> dy = {1,-1,1,-1}; 
 
        for(int i=0;i<4;i++){
            q_att.insert({xq+dx[i]*a,yq+(dy[i]*b)});
            q_att.insert({xq+dx[i]*b,yq+(dy[i]*a)});
            k_att.insert({xk+dx[i]*a,yk+(dy[i]*b)});
            k_att.insert({xk+dx[i]*b,yk+(dy[i]*a)});
        }
        int ans=0;
        for(auto& it:k_att){
            if(q_att.find(it)!=q_att.end()){
                ans++;
            }
        }
        cout<<ans<<'
';
 
    }
 
    return 0;
}