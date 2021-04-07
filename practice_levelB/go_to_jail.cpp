#include<iostream>

using namespace std;

int main(){
    int count = 0;
    int num;
    cin >> num;
    int dice[110][2];
    for(int i = 0; i < num; i++){
            cin >> dice[i][0] >> dice[i][1]; 
    }
    int i = 0;
    for(i = 0; i < num-2; i++){
        if(dice[i][0]==dice[i][1] && dice[i+1][0]==dice[i+1][1] && dice[i+2][0]==dice[i+2][1]){
                cout << "Yes" << endl;
                break;
            }
        }
    
    if(i == num-2) cout << "No" << endl;

    return 0;
}