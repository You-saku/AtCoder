#include<iostream>
#include<vector>
#include<algorithm>
//普通に解けなかった
//小数点がらみの対処方法や発想がなかった。

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int X = 1; X < N + 1; X++) {
        double x = X;
        x = (int)(x * 1.08);
        if (x == N) {
            cout << X << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}