#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>S(n);
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }
    unordered_set<string>check(S.begin(),S.end());
    //cout << "マッピング" << endl;

    for(string s:S){
        if(check.count('!'+s)){
            cout << s << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}