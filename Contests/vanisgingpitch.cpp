#include<iostream>
using namespace std;

int main(){
    int v,t,s,d;
    cin >> v >> t >> s >> d;

    int range1 = v*t;
    int range2 = v*s;
    if(d>=range1 && d<=range2){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}