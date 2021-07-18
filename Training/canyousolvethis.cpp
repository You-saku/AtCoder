#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m,c;
    cin >> n >> m >> c;
    vector<int>A(m+1);
    int B[n+1][m+1];
    for(int i = 0;i < m;i++){
        cin >> A[i];
    }
    int count = 0;
    for(int i = 0;i < n; i++){
        int sum = 0;
        for(int j = 0;j < m; j++){
            cin >> B[i][j];
            sum += A[j]*B[i][j];
        }
        if(sum+c > 0) count++;
    }
    cout << count << endl;
    return 0;
}