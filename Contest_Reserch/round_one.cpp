#include<iostream>

using namespace std;

int main(){
    int a ,b;
    cin >> a;
    cin >> b;
    for(int i = 1; i <= 3; i++){
        if(i==a || i==b){
        continue;
        }else{
            cout << i << endl;
        }
    }
    return 0;
}