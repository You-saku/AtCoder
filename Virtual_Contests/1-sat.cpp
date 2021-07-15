#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>s(n);
    set<string>check;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        check.insert(s[i]);
    }

    for(int i = 0; i < n; i++){
        if(check.count("!"+s[i])){
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;

    return 0;
}