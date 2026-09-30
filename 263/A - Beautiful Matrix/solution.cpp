#include <iostream>
using namespace std;
 
int main() {
    int arr[5][5];
    int m,n;
    int row=0,col=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                m=i,n=j;
            }
        }
    }
    if(m==1 || m==3){
        row+=1;
    }
    else if(m==0 || m==4){
        row+=2;
    }
    if(n==1 || n==3){
        col+=1;
    }
    else if(n==0 || n==4){
        col+=2;
    }
    cout<<row+col;
    return 0;
}