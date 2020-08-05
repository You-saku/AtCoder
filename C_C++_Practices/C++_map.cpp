#include<iostream>
#include<string>
#include<map>

using namespace std;
/*
mapについて滅茶苦茶触れる。
少しずつ覚ていくぜ
*/

int main(){

    map<string,int>score; //scoreは連想配列の名前,<>の中身は中身
    string names[] = {"Tom","Bob","Yusaku","Mike"};
    score[names[0]] = 100;
    score[names[1]] = 10;
    score[names[2]] = 1;
    score[names[3]] = 1000;
    cout << "全要素" << endl;
    for(int i = 1; i < score.size(); i++){//score.size -> 連想配列の数を返す
        cout << names[i] << score[names[i]] << endl;
    }
    cout << "\n";
    //違う方法で全要素出力
    cout << "要素ずつ" << endl;
    for(const auto& x : score){
        cout << x.first << endl;// first=一つ目,second=二つ目
        cout << x.second << endl; 
    }
    cout << "\n";

    cout << "昇順(キー)" << endl;
    //autoとか言う最強の変数
    for(auto it = score.begin(); it != score.end(); it++){
        cout << it->first << endl;// 連想配列の参照方法
    }
    cout <<"\n";

    cout << "降順(キー)" << endl;
    map<string,int>::reverse_iterator i = score.rbegin();    
    for(; i != score.rend(); i++){
        cout << i->first << endl;
    }
    cout <<"\n";

}