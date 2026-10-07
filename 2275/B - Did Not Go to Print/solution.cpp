#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<int> st;
        vector<int> rem;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='1'){
                st.push(i);
            }
            else if(s[i-1]=='2'){
                if(!st.empty()){
                    st.pop();
                    rem.push_back(i);
                }
            }
        }
        while(!st.empty()){
            int ele = st.top();
            rem.push_back(ele);
            st.pop();
        }
        sort(rem.begin(),rem.end());
        cout<<rem.size()<<'
';
        for(auto it:rem){
            cout<<it<<" ";
        }
        cout<<'
';
    }
 
    return 0;
}