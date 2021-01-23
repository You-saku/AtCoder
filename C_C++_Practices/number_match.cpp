#include<iostream>

using namespace std;

//C++で特殊なfor文があることをし知る
int main() {
    int num;
    cout << "2けたの数字を入力" << endl;
    cin >> num;

    int first = num;//2の判定に使う
    int second = num;//5の判定に使う

    //2の判定
    //一桁ずつ確認する あまりが5なら5が含まれていることになる。
    while(first>0){
        if(first%10==2){
            cout << "Yes" << endl;
            return 0;
        }
        first/=10;
    }

    //5の判定
    //一桁ずつ確認する あまりが5なら5が含まれていることになる。
    while(second>0){
        if(second%10==5){
            cout << "Yes" << endl;
            return 0;
        }
        second/=10;
    }

    cout << "No" << endl;
    return 0;
    
}