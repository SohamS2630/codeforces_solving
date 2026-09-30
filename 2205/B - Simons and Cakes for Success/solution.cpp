#include <iostream>
#include <set>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a = n;
        set<long long> s;
        while(n%2==0){
            s.insert(2);
            n = n/2;
        }
        int i=3;
        while(i*i<=n){
            while(n%i==0){
                s.insert(i);
                n=n/i;
            }
            i+=2;
            
        }
        if(n>2){
            s.insert(n);
        }
        long long ans=1;
        for(const auto& it:s){
            ans = ans*it;
        }
        cout<<ans<<'
';
    }
 
    return 0;
}