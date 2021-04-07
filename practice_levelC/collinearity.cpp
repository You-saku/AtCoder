#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int xy[1010][2];

    for(int i = 0; i < n; i++){
        cin >> xy[i][0] >> xy[i][1];
    }

    bool flag = false;

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if((xy[j][0]-xy[i][0])*(xy[k][1]-xy[i][1])==(xy[k][0]-xy[i][0])*(xy[j][1]-xy[i][1])){
                    flag = true;
                    break;
                }
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}