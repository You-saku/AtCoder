//計算量が入力に依存しすぎ
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int answer = 0;
    cin >> n;
    vector<int>numbers(n);
//入力部分
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    for(int i = 0; i < n; i++){
        int end = numbers[i];
        for(int j = 2; j <= end; j++){
            if(j==end){ 
                answer++;
                break;
            }
            if(numbers[i]%j==0) break;
            
        }
    }
    cout << answer << endl;
}