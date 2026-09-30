#include <iostream>
using namespace std;
 
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int maxi1=0,maxi2=0,maxi3=0,maxi4=0,maxi5=0;
    int a1=a+b+c;
    int a2=(a+b)*c;
    int a3=a*(b+c);
    int a4=a*b*c;
    int a5= a+b*c;
    int a6= a*b+c;
    maxi1=max(a1,a2);
    maxi2=max(a3,a4);
    maxi3=max(a5,a6);
    maxi4=max(maxi1,maxi2);
    maxi5=max(maxi4,maxi3);
    cout<<maxi5;
 
    return 0;
}