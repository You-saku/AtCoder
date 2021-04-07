//型問題再び
#include<iostream>

using namespace std;

int main(){
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    long long int product1 = a*c;
    long long int product2 = a*d;
    long long int product3 = b*c;
    long long int product4 = b*d;
    long long  int max = product1;

    if(max <= product2){
        max = product2;
    }
    if(max <= product3){
        max = product3;
    }
    if(max <= product4){
        max = product4;
    }

    cout << max << endl;

    return 0;
}