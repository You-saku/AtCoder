#include<iostream>
#include<vector>

using namespace std;

int main(){
    int num;
    cin >> num;

    vector<int>a(num);
    a[1] = 7%num;
    for(int i = 2; i <= num; i++){
        a[i] = ((a[i-1]*10)+7)%num;
        }
    
    for(int i = 1; i <= num; i++){
        if(a[i] == 0){
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

}