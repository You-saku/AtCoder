#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int max = 0;
    int ab = a+b;
    int ac = a+c;
    int bc = b+c;
    if(max < ab) max = ab;
    if(max < ac) max = ac;
    if(max < bc) max = bc;    
    cout << max << endl;
    return 0;
}