#include<iostream>
#include <cmath>

using namespace std;

int main(){
    int l;
    double ans;
    cin >> l;
    if(l%3 == 0){
        ans = pow(l/3,3);
    }
    if(l%3 == 2){
        ans = pow(l/3,2)*(l/3-1);
    }
    if(l%3 == 1){
        ans = l/3*pow(l/3-1,2);
    }
    cout << ans << endl;
    return 0;
}