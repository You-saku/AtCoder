#include<iostream>

using namespace std;

//C++で特殊なfor文があることをし知る
int main() {

    //通常のfor文
    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }
    cout << "abnormal" << endl;
    for(int base: {3,10}){
        cout << base << endl;
    }
    return 0;
}