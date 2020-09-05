#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//入力した整数から3つ選んだ和の最大を求めよ
////
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n+1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b[0] = 0;
    for(int i = 1; i < n+1;i++){
        b[i] = b[i-1] + a[i-1];
    }
    /*部分和の全表示
    for(int i = 0; i < n+1; i++){
        cout << b[i] << endl;
    }
    */
    int ans = 0;
    for(int i = 3; i < n+1; i++){
        ans = max(ans,b[n]-b[n-3]);
    }
    cout << ans << endl;
}