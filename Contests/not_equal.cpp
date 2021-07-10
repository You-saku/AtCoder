#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    long long count = 1;
    cin >> n;
    vector<int>C(n);
    for(int i=0; i<n; i++){
        cin >> C[i];
    }
    sort(C.begin(),C.end());

    for(int i=0; i<n; i++){
        count = count*(C[i]-i)%1000000007;
    }

    cout << count << endl;

    return 0;
}