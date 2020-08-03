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
    
    cout << x/b << endl;

}