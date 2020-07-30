#include<iostream>
#include<string>//string使うとき
#include<map>//map(連想配列)使う時のやつ

using namespace std;

int main(){
    int N;
    int count = 0;  
    map<string,int>words;
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        words[s] +=1;
    }
    for(const auto&x : words){
        if(x.second>count) count = x.second;
    }//入力された回数の最大回数を更新

    for(auto it = words.begin(); it !=  words.end(); it++){
        if(it->second == count){
            cout << it->first << endl;
        }
    }
}