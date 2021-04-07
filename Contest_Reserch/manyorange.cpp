#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a;
    int b;
    int w;
    int Max = 0;
    int Min = 1000000000;
    cin >> a >> b >> w;
    for(int i = 1; i <= 1000000; i++){
        if(a*i <= w*1000 && w*1000 <= b*i){
            Min = min(Min,i);
            Max = max(Max,i);
        }
    }
    if(Max == 0) {
        cout << "UNSATISFIABLE" << endl;
    }else{
        cout << Min << " " << Max << endl;
    }
    return 0;
}