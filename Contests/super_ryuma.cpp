#include<iostream>
using namespace std;

int main(){
    int start[2];
    int target[2];
    int count = 0;
    cin >> start[0] >> start[1];
    cin >> target[0] >> target[1];

    while(!(start[0]==target[0] || start[1] == target[1])){
        
        count++;
    }

    cout << count << endl;

    return 0;
}