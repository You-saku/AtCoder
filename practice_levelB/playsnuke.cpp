#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int n;
    int sum = INT_MAX;
    cin >> n;
    int a,p,x;
    for(int i = 0; i < n; i++){
        cin >> a >> p >> x;
        if(x>a) sum = min(sum,p);
    }

    if(sum == INT_MAX) sum = -1;
    cout << sum << endl;

    return 0;
}