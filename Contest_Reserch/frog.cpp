#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int>heights(n);
    
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }
    vector<int>cost1(n);
    vector<int>cost2(n);
    
    //コスト作成
    for(int i = 1; i < n; i++){
        cost1[i-1] = abs(heights[i] - heights[i-1]);
    }
 
    //コスト作成2
    for(int i = 1; i < n-1; i++){
        cost2[i-1] = abs(heights[i+1] - heights[i-1]);
    }
 
    int dp[100010];
    dp[0] = 0;
    dp[1] = cost1[0];
 
    for(int i = 1; i < n; i++){
        int tmp = min(dp[i]+cost1[i] , dp[i-1]+cost2[i-1]);
        dp[i+1] = tmp;
        
    }
 
    cout << dp[n-1] << endl;
 
    return 0;
}