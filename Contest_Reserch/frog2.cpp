#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {

    int n;
    int k;
    cin >> n >> k;
    vector<int>h(n);
    //配列定義は結構馬鹿にできない
    int dp[100010];
    dp[0] = 0;
    
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    return 0;
}