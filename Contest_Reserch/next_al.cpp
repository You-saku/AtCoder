#include <iostream>
using namespace std;

int main(){
    char al;
    cin >> al;
    string all = "abcdefghijklmnopqrstuvwxyz";
    int point = all.find(al);
    cout << all[point+1];
    return 0;
}