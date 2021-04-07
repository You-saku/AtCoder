#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> ac(N+1,0),wa(N+1,0);
    int A_sum , W_sum = 0;

    for(int i = 0; i < M; i++){
        string result;
        int number;
        cin >> number >> result;
        if(ac[number]==0 && result == "AC"){
            ac[number]=1;
            A_sum++;
        }else if(ac[number]==0 && result == "WA")
            W_sum++;
        }
    cout << A_sum << " " << W_sum << endl;
}

/*
"map"と"vector"の使い方を見極めるべし
裏を返せばこれができると滅茶苦茶便利 map vector 最高!!　というわけだ
*/