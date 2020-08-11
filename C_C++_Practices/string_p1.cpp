#include<iostream>
#include<string>
//文字列カウント
using namespace std;

int main(){
    string str;
    cin >> str;

    int count =0;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'Y') count++;
    }
    cout << count << endl;
}