#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        long long sum=0;
        long long maxi=0;
        for(int i=0;i<n;i++){
            long long val;
            cin>>val;
            maxi+=(val+x-1)/x;
            sum+=val;
        }
        long long mini=(sum+x-1)/x;
        cout<<mini<<" "<<maxi<<"
";
    }
 
    return 0;
}