#include<iostream>
using namespace std;
int main(){
    int matrix[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> matrix[i][j];
        }
    }

    int ans  = (matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);
    cout << ans << endl; 
    return 0;
}