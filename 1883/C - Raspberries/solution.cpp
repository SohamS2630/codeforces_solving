#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        int even=0;
        int mod4=0;
        int have37=0;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            v.push_back(val);
            if(val%2==0){
                if(val%4==0){
                    mod4=1;
                }
                even++;
            }
            if(val==3 || val==7){
                have37++;
            }
        }
        if(k==3){
            int max_3=-1;
            int mod3=0;
            for(const auto& it:v){
                max_3 = max(max_3,it%3);
                if(it%3==0){
                    mod3=1;
                }
            }
            if(mod3==1){
                cout<<0<<'
';
            }
            else{
                cout<<k-max_3<<'
';
            } 
        }
        else if(k==5){
            int max_5=-1;
            int mod5=0;
            for(const auto& it:v){
                max_5 = max(max_5,it%5);
                if(it%5==0){
                    mod5=1;
                }
            }
            if(mod5==1){
                cout<<0<<'
';
            }
            else{
                cout<<k-max_5<<'
';
            } 
        }
        else if(k==2){
            if(even>0){
                cout<<0<<'
';
            }
            else{
                cout<<1<<'
';
            }
        }
        else if(k==4){
            int odd=n-even;
            if(mod4==1){
                cout<<0<<'
';
            }
            else if(even>=2){
                cout<<0<<'
';
            }
            else if(even==1 && odd>0){
                cout<<1<<'
';
            }
            else if(even==1){
                cout<<2<<'
';
            }
            else if(have37>0){
                cout<<1<<'
';
            }
            else if(n==1){
                cout<<3<<'
';
            }
            else{
                cout<<2<<'
';
            }
 
        }
    }
 
    return 0;
}