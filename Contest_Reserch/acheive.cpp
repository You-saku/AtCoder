#include<iostream>

using namespace std;
int tests[110];

int main(){
    int n;
    int k;
    int m;
    cin >> n >> k >> m;
    int base = m*n;
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        cin >> tests[i];
        sum+=tests[i];
    }

    if(base-sum>k){
        cout << -1 << endl;
    }else if(base-sum <= 0){
        cout << 0 << endl;
    }else{
        cout << base-sum << endl;
    }
    return 0;
}