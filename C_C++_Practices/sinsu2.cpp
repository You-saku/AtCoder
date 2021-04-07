#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int>list(num+10);
    int ans = 0;

    int index = 0;
    while(num>0){
        list[index] = num%8;
        num/=8;
        index++;
    }

    for(int i = 0; i <= index; i++){
        ans += list[i]*pow(8.0,i);
    }

    cout << ans << endl;

    return 0;
}