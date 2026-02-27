#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string b = "ABC", t = "BABC", z = "CCAABB";
    int n; cin>>n;
    string ans; cin>>ans;
    int bc = 0, tc = 0, zc = 0;
    for(int i = 0; i < n; i++){
        if(ans[i] == b[i]){
            bc++;
        }
        if(ans[i] == t[i]){
            tc++;
        }
        if(ans[i] == z[i]){
            zc++;
        }
        if(i % 3 == 0) b += b;
        if(i % 4 == 0) t += t;
        if(i % 6 == 0) z += z;
    }
    int count = max(bc, tc);
    count = max(count, zc);
    cout<<count<<endl;
    if(count == bc){
        cout<<"Ben"<<endl;
    }
    if(count == tc){
        cout<<"Ten"<<endl;
    }
    if(count == zc){
        cout<<"Zen"<<endl;
    }
    return 0;

}
