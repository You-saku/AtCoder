#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
#include<cmath>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    string str = a+b;
    int num;
    num  = atoi(str.c_str());
    
    for(double i = 1.0; i < 10000000 ;i++){
        if(i == sqrt(double(num))){ 
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}