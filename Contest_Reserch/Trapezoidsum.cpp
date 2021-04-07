#include<iostream>
using namespace std;

int main(){
    int n;
    long long sum =0;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a;
        long long b;
        cin >> a >> b;
        sum += (a+b)*(b-a+1)/2;
    }
    cout << sum << endl;

    return 0;
}