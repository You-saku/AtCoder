#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>num1(n);
    vector<int>num2(n);
    for(int i = 0; i < n; i++){
        cin >> num1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> num2[i];
    }

    int inner=0;
    for(int i = 0; i < n; i++){
        inner += num1[i]*num2[i];
    }
    if(inner==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}