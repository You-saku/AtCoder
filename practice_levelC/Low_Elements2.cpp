//一応クリア(AC)
//
// ＊注意 入力サイズの限界値に注目するべし
// 今回はこれにつまずくことがあった。
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int answer = 0;
    int min = 2000000;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(min >= num){
        min = num;
        answer++;
        }
    }
    cout << answer << endl;
}