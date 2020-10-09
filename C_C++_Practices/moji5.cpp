#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;

int main(){
    std::string moji;

    cout << "Please Enter some words." << endl;
    cin >> moji;

    int num = moji.size();
    for(int i = num-1; i >= 0; i--){
        cout << moji[i];
    }
    cout << "\n";

    return 0;
}