#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int h, w; cin>>h>>w;
    int m, n; cin>>m>>n;
    char c1, c2; cin>>c1>>c2;
    char print = c1;
    string curr;
    vector<vector<string>> v;
    vector<string> curr_v;
    for(int i = 0; i < m*h; i++){
        if(print == c1 && i % h == 0) print = c2;
        else if(print == c2 && i % h == 0) print = c1;
        curr_v.clear();
        for(int j = 0; j < n*w; j++){
            curr = "";
            if(print == c1) print = c2;
            else{
                print = c1;
            }
            for(int k = 0; k < w; k++){
                curr += print;
            }
            curr_v.push_back(curr);
        }
        v.push_back(curr_v);
    }
    int count = 0;
    for(int i = 0; i < m*h; i++){
        for(int j = 0; j < n; j++){
        if(count == h){
            reverse(v[i][j].begin(), v[i][j].end());
            count = 0;
        }
            cout<<v[i][j];
        }
        cout<<endl;
        count +=1;
    }
}
