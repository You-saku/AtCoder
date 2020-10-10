#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    int n,m;
    cin >> n >> m;

    string s[105];
    int check[2] = {-1,1};
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0){
                if(s[i][j] == '.' && s[i][j+check[1]] == '.') count++;
            }else{
                if(s[i][j] == '.' && s[i][j+check[1]] == '.') count++;
                if(s[i][j] == '.' && s[i+check[0]][j] == '.') count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}