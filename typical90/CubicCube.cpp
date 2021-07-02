#include<iostream>

using namespace std;

long long gcd(long a,long b){
    if(b==0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    long long num = gcd(a,gcd(b,c));
    cout << (a/num-1)+(b/num-1)+(c/num-1) << endl;
    return 0;
}