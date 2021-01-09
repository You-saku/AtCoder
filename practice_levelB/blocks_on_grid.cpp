#include<iostream>

using namespace std;

int main(){
    int x,y,min;
    cin >> x >> y;
    int blocks[100][100];

    min = 10000;    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> blocks[i][j];
            if(min > blocks[i][j]) min = blocks[i][j];
        }
    }

    int sum = 0;
    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            sum += blocks[i][j]-min;
        }
    }

    cout << sum << endl;

    return 0;
}