#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    int bottels[10010];
    int alcohol[10010];
    long double amount = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        cin >> bottels[i] >> alcohol[i];
        long long int tmp = bottels[i]*alcohol[i];
        long double sum = tmp/100;
        //cout << sum << endl;
        amount+=sum;
        //cout << amount << endl;
        if(amount>x){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}