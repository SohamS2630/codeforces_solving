#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i <= n - k - 1; i++) {
            if (s[i] == '1') {
                s[i] = '0';
                if (s[i + k] == '0') {
                    s[i + k] = '1';
                }
                else {
                    s[i + k] = '0';
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cout << "NO
";
                flag = false;
                break;
            }
        }
        if(flag){
        
            cout << "YES
";
        }
    }
    return 0;
}
 
 