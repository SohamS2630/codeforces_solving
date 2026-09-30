#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    n++;
    int t=n;
    int n1=t%10;
    t=t/10;
    int n2=t%10;
    t=t/10;
    int n3=t%10;
    t=t/10;
    int n4=t%10;
    while((n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4 || n3==n4)){
        n+=1;
        t=n;
        n1=t%10;
        t=t/10;
        n2=t%10;
        t=t/10;
        n3=t%10;
        t=t/10;
        n4=t%10;
    }
    cout<<n;
    return 0;
}