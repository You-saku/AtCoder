#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char>s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        if(i%2 == 0 && s[i]=='1'){
            cout << "Takahashi" << endl;
            return 0;
        }
        if(i%2 == 1 && s[i]=='1'){
            cout << "Aoki" << endl;
            return 0;
        }
    }
    return 0;
}