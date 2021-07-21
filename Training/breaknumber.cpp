#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 1;
    for(int i=1; i <= n; i++){
        if(i == 2 || i == 4 || i == 8 || i == 16 || i == 32 || i == 64) ans = i;
    }
    cout << ans << endl;
    return 0;
}