#include<iostream>
#include<string>//string�g���Ƃ�
#include<map>//map(�A�z�z��)�g�����̂��

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
    }//���͂��ꂽ�񐔂̍ő�񐔂��X�V

    for(auto it = words.begin(); it !=  words.end(); it++){
        if(it->second == count){
            cout << it->first << endl;
        }
    }
}