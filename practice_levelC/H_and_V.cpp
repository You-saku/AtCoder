//自分ひとりではなかなか難しい。
//配列をどうやって隠すのか考えることができなかった。

#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>

using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    //char field[8][8];
    vector<vector<char>> field(h, vector<char>(w));
    int answer = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> field.at(i).at(j);
        }
    }

    char test[8][8];
    //配列コピー
    //  testを使って判定を行う
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            test[i][j] = field[i][j];
        }
    }
    /*for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << test[i][j] << " ";
        }
        cout << "\n";
    }
    */

}