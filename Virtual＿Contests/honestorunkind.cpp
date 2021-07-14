#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    int xy[20][20];
    for(int i=0; i<n; i++){
        cin >> a;
        for(int j=0; j<a; j++){
            cin >> xy[i][j];
        }
    }

    return 0;
}