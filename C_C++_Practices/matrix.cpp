#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int H,W;
    int move[2] = {-1,1};
    cin >> H >> W;
    vector<string> S(H); 

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){

            bool ok = true;
            for (int k = 0; k < 2; k++){
                if(0 <= i+move[k] && i+move[k] < H && S[i+move[k]][j] != '#'){
                    ok = false;
                    break;
                }
                if(0 <= j+move[k] && j+move[k] < W && S[i][j+move[k]] != '#'){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << i << " " << j << endl;
            }
        }
    }
}