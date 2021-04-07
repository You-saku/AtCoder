#include<iostream>

using namespace std;

int main(){
    int x = 0;
    int y = 0;
    cout << x++ << endl; //実行後にインクリメント
    cout << x << endl;
    cout << ++y << endl; //実行前にインクリメント
    cout << y << endl;
    return 0;
}