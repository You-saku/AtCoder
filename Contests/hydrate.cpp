#include<iostream>

using namespace std;

int main(){
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    if(c*d-b<=0){
        cout << -1 << endl;
        return 0;
    } 
    
    int count = 0;
    while(a+(b-c*d)*count>0){
        count++;
    }
    cout << count << endl;
    return 0;
}