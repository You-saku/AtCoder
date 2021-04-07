#include<iostream>

using namespace std;

int main(){

    string moji;
    cin >> moji;

    //cout << moji.size() << endl;

    for(int i = 0; i < moji.size(); i++){
        if(moji[i]=='a') moji[i] = 'A';
    }

    cout << moji << endl;

    return 0;
}