#include <iostream>
using namespace std;
 
int main() {
    int k,n,w,total_price;
    cin>>k>>n>>w;
    total_price=(k*w*(w+1))/2;
    if(total_price<=n){
        cout<<0;
    }
    else{
        cout<<total_price-n;
    }
    return 0;
}