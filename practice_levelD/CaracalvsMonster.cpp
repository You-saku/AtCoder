#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int H;
    cin >> H;
    int count = 0;
    long long answer;

    while(H!=1){
        H/=2;
        count++;
    }

    answer = 2*(pow(2,count))-1;

    cout << answer << endl;

    return 0;
}