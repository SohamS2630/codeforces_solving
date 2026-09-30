#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            v.push_back({val,i});
        }
        sort(v.rbegin(),v.rend());
 
        vector<long long> ans(n+1,0);
        ans[0]=0;
        long long min =0;
        long long j = 1;
        for(int i=0;i<n;i++){
            ans[v[i].second+1]=j;
            min+=2*abs(j)*v[i].first;
 
            if(j<0){
                j = abs(j)+1;
            }
            else{
                j = -j;
            }
        }
        cout<<min<<'
';
        for(auto const& it:ans){
            cout<<it<<" ";
        }
        cout<<'
';
 
    }
 
    return 0;
}