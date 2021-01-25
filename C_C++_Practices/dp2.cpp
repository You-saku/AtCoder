#include<iostream>

using namespace std;

int main(){
    int n = 7;
    
    int weight[6] = {7,5,1,4,5,4};
    int weight2[5] = {2,4,3,1,9};

    
    int dp[10];
    for(int i = 0; i < n; i++){
        dp[i] = 0;
    }
    dp[1] += weight[0];
    for(int i = 1; i < n; i++){
        if(dp[i]+weight[i] > weight2[i-1]+dp[i-1]){
            dp[i+1] = weight2[i-1]+dp[i-1];
        }else{
            dp[i+1] = dp[i]+weight[i];
        }
    }

    for(int i = 0; i < n; i++){
        cout << dp[i] << " ";
    }

    return 0;
}