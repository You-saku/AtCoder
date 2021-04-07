#include<iostream>

using namespace std;

int main(){
    long long  x,k,d;
    cin >> x >> k >> d;
    
    long long  output;
    long long  k2;

    //片道切符化
    x = abs(x);
    //場合を分けていく
    if(x/k>=d){
        output = x-(k*d);
    }else{
        k2 = x/d;
        k-=k2;
        x-=k2*d;
        if(k%2==0){
            output = x;
        }else{
            output = x-d;
        }
    }


    cout << abs(output) << endl;

    return 0;
}