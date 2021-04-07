#include<iostream>

using namespace std;

int main(){
    int N,K;

    cin >> N >> K;
    long double s_probability = 0;
    
    for(int i = 1; i <= N; i++){
        long double probability = 1.0/N; 
        //浮動小数点を扱うなら代入時点で少数使え//
        //   x) 1//
        //   o) 1.0//
        int result = i;
        while(result<=K){
            result=result*2;
            probability=probability/2;
        }
        s_probability+=probability;
    }
    cout << s_probability << endl;
}