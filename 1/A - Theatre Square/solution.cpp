#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
    long long n,m,a;
    cin>>n>>m>>a;
    long long lreq=ceil(double(n)/a);
    long long breq=ceil(double(m)/a);
    cout<<lreq*breq;
 
    return 0;
}