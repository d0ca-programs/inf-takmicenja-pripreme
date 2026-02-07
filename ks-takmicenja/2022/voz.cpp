#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int a, x = 3, y = 1;cin>>a;
    map<int, int> pairs;
    int count = 0;
    
    for(int i = 1; i <= matrix[0].size(); i+=2){
        pairs[i] = matrix[y][x-count];
        pairs[i+1] = matrix[y][x-count];
        pairs[matrix[y][x]] = i + count;
        pairs[matrix[y][x]-1] = i + count;
        x-=2;
        count++;
    }
    
    cout<<pairs[a];
}
