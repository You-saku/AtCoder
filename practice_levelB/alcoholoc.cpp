#include <iostream>
using namespace std;

int main(){

    int n,x;
    int v,p;
    int ans = -1;
    int amount = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        cin >> v >> p;
        amount += v*p;
        if(amount > x*100){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}