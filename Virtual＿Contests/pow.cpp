#include<iostream>

using namespace std;

int main(){
    int a,b;
    int c;
    cin >> a >> b >> c;
    if(c%2==1){
        if(a < b){
            cout<< "<" <<  endl;
            return 0;
        }else if(a > b){
            cout<< ">"  <<endl;
            return 0;
        }else{
            cout<< "=" << endl;
            return 0;
        }
    }else{
        if(abs(a) > abs(b)){
            cout<< ">"  <<endl;
            return 0;
        }else if(abs(a) < abs(b)){
            cout<< "<"  <<endl;
            return 0;
        }else{
            cout<< "=" << endl;
            return 0;
        }
    }
}