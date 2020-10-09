#include<iostream>

using namespace std;

int main(){
    int a ,b;
    cin >> a >> b;
    int add = a+b;
    int sub = a-b;
    int product =  a*b;

    int max = add;
    if(max < sub){
        max = sub;
    }

    if(max < product){
        max = product;
    }

    cout << max << endl;
        
    return 0;
}