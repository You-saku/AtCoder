#include<iostream>

using namespace std;

int main(){
    int H,W;
    char grid[60][60];
    cin >> H >> W;
    //グリッド作成
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid[i][j];
        }
    }

    bool flag = true;
    
    //2行目以降
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(grid[i][j] == '#' && grid[i-1][j] != '#' && grid[i+1][j] != '#' && grid[i][j-1] != '#' && grid[i][j+1] != '#'){
                flag = false;
            }
        }
    }


    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}