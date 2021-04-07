#include<iostream>
using namespace std;



int main(){
    int a;
    int b;
    int tmp;
    cout << "1????????????" << endl;
    cin >> a;
    cout << "2????????????" << endl;
    cin >> b;

    //
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    
    int r; //?]????i?[ 
    r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    
    cout << "???????[" << b << "]?????" <<endl;
}   