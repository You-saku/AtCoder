#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>data(5);
    bool flag=0;
    for(int i = 0; i < 5; i++){
        cin >> data.at(i);//vector要素入力
    }
    for(int i = 0; i < 4; i++){
        if(data.at(i) == data.at(i+1)) {
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}