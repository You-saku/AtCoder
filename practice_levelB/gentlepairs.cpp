#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count = 0;

    int n;
    cin >> n;
    long int xy[1010][2];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < 2;j++){
            cin >> xy[i][j];
        }
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int tilt = abs(xy[j][1]-xy[i][1])/abs(xy[j][0]-xy[i][0]);
            if(tilt <= 1 && tilt >= -1) count++;
        }
    }

    cout << count << endl;
    return 0;
}
