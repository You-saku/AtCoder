#include<iostream>

using namespace std;

int main(){
    int m;
    int h;
    cin >> m >> h;
    if(h%m==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}