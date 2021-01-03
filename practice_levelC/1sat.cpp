#include <iostream>
#include <vector>
#include <string>
#include<unordered_set>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string>S(n);
    //ここからはチート
    for(string& s: S) cin >> s;
    unordered_set<string> h(S.begin(),S.end()); //重複を排除してキーにする
    for(string& s :S) if (h.count('!'+s)){
        cout << s << endl;
        return 0;
    } 
    cout << "satisfiable" << endl;
}