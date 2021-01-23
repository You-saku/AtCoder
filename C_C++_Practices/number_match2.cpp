#include<iostream>
#include<vector>
using namespace std;

//C++で特殊なfor文があることをし知る
int main() {
    int num;
    cout << "2けたの数字を入力" << endl;
    cin >> num;

    vector<int>n={2,5};
    //2と5の判定をする
    //一桁ずつ確認する あまりが2か5なら入力に2か5が含まれていることになる。
    while(num>0){
        for(int check: n){
            if(num%10 == check){
                cout << "Yes" << endl;
                return 0;
            }
        }
        num/=10;
    }

    cout << "No" << endl;
    return 0;
    
}