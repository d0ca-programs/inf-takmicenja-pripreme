#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> matrix;
    int x = 3, y = 2;
    int count = 0;
    bool possible = true;
    bool* ptr = &possible;
    
    while(*ptr){
        for(int i = 0; i < y; i++){
        vector<char> curr(x);
        char c;
        for(int j = 0; j < x; j++){
            cin>>curr[j];
            if(curr[j] == '.'){
                count++;
            }
        }
        matrix.push_back(curr);
    }
    
        //polja se unose u 2D vector, mada se ne mora koristiti
        
        if(count < 4){
            possible = false;
        }else if(count >= 5){
            cout<<"DA";
            return 0;
        }
        
        /*
            kako bi jedan tetromino stao, potrebna su min. 4 slobodna polja
            kada bi bilo >=5 slobodnih polja, jedan od ponudenih tetromina mora stati u bilo kojem slucaju
        
        */
        
        if(matrix[0][1] == matrix[1][1] && matrix[0][0] == '#'){
            possible = false;
        }
        for(int i = 1; i < x; i++){
            if(matrix[0][i] == matrix[1][i-1] && matrix[0][i] == '#'){
                possible = false;
            }else if(matrix[0][i-1] == matrix[1][i] && matrix[0][i-1] == '#'){
                possible = false;
            }
        }
        
        /*
            provjera za slucajeve u kojima ima 4 slobodnih polja, ne mogu stati kada su zauzeta polja
            dijagonalno i uspravno u centru
        */
        if(!*ptr) break;
        cout<<"DA";
        return 0;
    }
    cout<<"NE";
    return 0;
    
}
