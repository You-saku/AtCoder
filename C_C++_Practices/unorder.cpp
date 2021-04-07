#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

int main(){
    unordered_set<string> us {"1","2","5","4","3",};
    vector<string>us2 {"1","1","1","7","6"};
    int count = 0;

    //これでキーにマッチした要素を持っているのか否かが判別可能
    for(string& s :us2) if(us.count(s)){
        count++;//マッチ数
    }

    cout << count << endl;

    return 0;
}