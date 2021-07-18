#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long h,w;
    cin >> h >> w;
    if(h == 1 || w == 1){
        cout << 1 << endl;
        return 0;
    }
    long long multi = h*w;
    long long ans = multi/2;
    if(multi%2 == 1) ans++;
    cout << ans << endl;
    return 0;
}