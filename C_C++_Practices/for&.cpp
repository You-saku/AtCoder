#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin >> num;

    //vectorに対してポインタ?で追加
    vector<int>N(num);
    //これでもうfor文になる
    for(int& n : N) cin >> n;

    for(int i = 0; i < num; i++){
        cout << N[i] << endl;
    }
    return 0;
}