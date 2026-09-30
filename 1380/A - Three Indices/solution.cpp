#include <iostream>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int maxi=INT_MIN;
        int ind=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>maxi){
                maxi=arr[i];
                ind = i;
            }
        }
        if(ind!=n-1 && ind!=0 ){
            cout<<"YES"<<"
";
            cout<<ind<<" "<<ind+1<<" "<<ind+2<<'
';
            flag = false;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    cout<<"YES"<<"
";
                    cout<<i<<" "<<i+1<<" "<<i+2<<"
";
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"NO"<<'
';
        }
 
    }
 
    return 0;
}