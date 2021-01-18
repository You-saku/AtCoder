#include<iostream>

using namespace std;

//C++で特殊なfor文があることをし知る
int main() {
    for(int base: {3,10}){
        cout << base << endl;
    }
    return 0;
}