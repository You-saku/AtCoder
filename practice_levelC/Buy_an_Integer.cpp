//オーバーフロー???
#include<iostream>
#include<string>
using namespace std;

long a,b,x;

//桁数計算
int d(long N){
    return to_string(N).size();
}

bool f(long N){
    long p = a*N+b*d(N);
    if(x>=p){
        return true;
    }else{
        return false;
    }
}

int main(){
    cin >> a >> b >> x;
    long min = 0; long max = 1e9+1;
    while(max-min>1){
        long mid = (max+min)/2;
        (f(mid)) ? min = mid : max = mid;
    }
    cout << min << endl;
}
