#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int x = a*b;
    //ユークリッドの互除法
    if(a<b){
        int tmp;
        tmp = b;
        b = a;
        a = tmp;
    }
    int r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    //終了
    //
    //最小公倍数を求める
    //2数の積を最小公約数で割ると最大公約数は求まる   
    cout << x/b << endl;

}