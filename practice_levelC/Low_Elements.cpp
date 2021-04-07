//これもやはり計算量でダメ
//最悪だ
//俺マジで計算量苦手

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    int answer = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j >= 0; j--){
            if(num[i]>num[j]) break;
            if(j==0) answer++;
        }
    }
    cout << answer << endl;
}