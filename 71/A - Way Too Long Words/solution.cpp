#include <iostream>
#include<string>
using namespace std;
 
string len(string s,int a){
    int count=0;
    if(a<=10){
        return s;
    }
    else{
    for(int i=1;i<a-1;i++){
        count+=1;
    }
    return (s[0]+to_string(count)+s[a-1]);
    }
 
}
 
int main(){
    int n;
    cin>>n;
    string s;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>s;
        int a=s.length();
        arr[i]=len(s,a);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'
';
    }
}