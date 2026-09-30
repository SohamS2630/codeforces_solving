#include <iostream>
using namespace std;
 
int main() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int req=0;
    int travel=0;
    if(b/m<=a){
        if(n%m==0){
            if((n/m)*b<a*n){
                cout<<(n/m)*b;
            }
            else{
                cout<<a*n;
            }
        }
        else{
            int temp =n/m;
            int rem =n%m;
            int price2 =temp*b+rem*a;
            int price1=(temp+1)*b;
            if(price1<price2){
                cout<<price1;
            }
            else{
                cout<<price2;
            }
        }
    }
    else{
        cout<<n*a;
    }
    return 0;
}