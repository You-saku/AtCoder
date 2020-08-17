// bit 全探索
//　ここからがメイン

#include<iostream>
#include<bitset>
using namespace std;

int main() {
    int n = 7;
    //8bitの2進数を順番にフラグ立てする
    for (int bit = 0; bit <= n; bit++)
    {
        /* bit で表される集合の処理を書く */
        int states = 0;
        states|= (1<<bit);
        cout << bitset<8>(states) << endl; 
    }
}