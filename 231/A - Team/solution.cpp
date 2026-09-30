#include <iostream>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;
    int right =0;
 
    while(n--){
        int arr[3];
        int count =0;
        for(int i=0;i<3;i++){
            cin>>arr[i];
            if(arr[i]==1){
                count +=1;
            }
        }
        if(count>=2){
            right +=1;
        }
    }
    cout<<right;
 
    return 0;
}