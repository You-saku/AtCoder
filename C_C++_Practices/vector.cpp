#include<iostream>
#include<vector> //vector使う
using namespace std;

int main(){
    //vector基本
    vector<int>data ={
        1,2,3,4,5
    };
    for(auto &n:data){
        cout << n << endl;
    }
    /*vector宣言&初期化
    vectorサイズ取得
    */
    vector<int>num(5,0);
    for(int i = 0; i<num.size(); i++){
        cout << num[i] << " ";
    }

    //vector多次元配列
    vector<int> data2(3);//初期化の方法
    vector<vector<int>>data3(4,vector<int>(4)); //2次元配列初期化

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> data3[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << " " << data3[i][j];
        }
        cout << "\n";
    }


}