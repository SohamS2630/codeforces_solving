#include <iostream>
#include<set>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int p,q,p1,q1;
    cin>>p;
    set<int> lev;
    for(int i=1;i<=p;i++){
        cin>>p1;
        lev.insert(p1);
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>q1;
        lev.insert(q1);
    }
    if(lev.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}