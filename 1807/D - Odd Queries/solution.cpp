#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long val;
        long  long sum=0;
        vector<long long> pre_sum(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>val;
            sum+=val;
            pre_sum[i]=pre_sum[i-1]+val;
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            if((pre_sum[l-1]+(r-l+1)*k+(sum-pre_sum[r]))%2!=0){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<"
";
            }
        }
 
    }
 
    return 0;
}