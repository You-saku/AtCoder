#include<iostream>
#include<string>
#include<map>

using namespace std;
/*
map�ɂ��ĖŒ��ꒃ�G���B
�������o�Ă�����
*/

int main(){

    map<string,int>score; //score�͘A�z�z��̖��O,<>�̒��g�͒��g
    string names[] = {"Tom","Bob","Yusaku","Mike"};
    score[names[0]] = 100;
    score[names[1]] = 10;
    score[names[2]] = 1;
    score[names[3]] = 1000;
    cout << "�S�v�f" << endl;
    for(int i = 1; i < score.size(); i++){//score.size -> �A�z�z��̐���Ԃ�
        cout << names[i] << score[names[i]] << endl;
    }
    cout << "\n";
    //�Ⴄ���@�őS�v�f�o��
    cout << "�v�f����" << endl;
    for(const auto& x : score){
        cout << x.first << endl;// first=���,second=���
        cout << x.second << endl; 
    }
    cout << "\n";

    cout << "����(�L�[)" << endl;
    //auto�Ƃ������ŋ��̕ϐ�
    for(auto it = score.begin(); it != score.end(); it++){
        cout << it->first << endl;// �A�z�z��̎Q�ƕ��@
    }
    cout <<"\n";

    cout << "�~��(�L�[)" << endl;
    map<string,int>::reverse_iterator i = score.rbegin();    
    for(; i != score.rend(); i++){
        cout << i->first << endl;
    }
    cout <<"\n";

}