#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

    string moji;
    string target = "abc";


    cout << "Please Enter words list" << endl;
    cin >> moji;

    int i = 0;
    int count = 0;

    while(i <= moji.size()-3){
        if(moji[i]== 'a' && moji[i+1] == 'b' && moji[i+2] =='c'){
            count++;
            i+=3;
            continue;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}