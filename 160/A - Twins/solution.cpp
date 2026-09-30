#include <iostream>
#include<algorithm>
using namespace std;
 
int check(int arr[],int j,int sum,int n,int count){
    int sum1=0;
    for(int i=j;i<n;i++){
        sum1+=arr[i];
    }
    if(sum1>sum-sum1){
        return count;
    }
    else{
        check(arr,j-1,sum,n,count+1);
    }
}
 
int main() {
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int count=1;
    cout<<check(arr,n-1,sum,n,count);
 
 
    return 0;
}