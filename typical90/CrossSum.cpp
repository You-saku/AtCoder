#include<iostream>
using namespace std;

int main(){
    int A[1000][1000];
    int h,w;
    int row[1000];
    int line[1000];
    int matrix[1000][1000];
    cin >> h >> w;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            row[i]+= A[i][j];
            line[j] += A[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            matrix[i][j] = row[i] + line[j] - A[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << matrix[i][j] << " ";
        }
    }
    

    return 0;
}