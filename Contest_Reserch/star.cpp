#include<iostream>

using namespace std;
int main(){
    int x;
    cin >> x;
    int check = x%100;
    if(check==0){
        cout << 100 << endl;
    }else{
        cout << 100-check << endl;
    }
    return 0;
}