#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int>check(n);
    for(int i=0; i<n; i++){
        check[i] = 0;
    }

    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        check[num%n]++;
        if(check[num] == 2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}