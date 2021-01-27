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
    long long int dp[100010];
    for(int i = 0; i < n+10; i++){
        dp[i] = 100000000000;
    }
    dp[0] = 0;
    
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    

    for(int i = 0; i < n; i++){
        for(int j = 1; j<=k; j++){
            if(i+j<n){
                dp[i+j] = min(dp[i+j],dp[i]+abs(h[i]-h[i+j]));
            }
        }
    }

    for(int i = 1; i < n; i++){
        cout << dp[i] << endl;
    }
    

    return 0;
}