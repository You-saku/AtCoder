//解答参照
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(),v.end());
    double result = v[0];

    for(int i = 1; i<n; i++){
        result = (result+v[i])/2;
    }
    cout << result << endl;
}