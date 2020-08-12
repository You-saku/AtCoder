#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int ans = 1;
    cin >> n;

    vector<int>x(n+1);
    int num = n;
    for(int i = 2; i <= n; i++){
        while(num%i==0){
            x.at(i)++;
            num/=i;
        }
    }
////////素因数を持っている数字の数を表示
    for(int i = 0; i <= n; i++){
        cout << x[i] << " ";
    }

}