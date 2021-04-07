#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>num(n);
    for(int i = 0; i < n; i++){
        num[i] = i;
    }
    int table[10][2];
    for(int i = 0; i < n; i++){
        cin >> table[i][0] >> table[i][1];
    }

    int count = 1;
    do{
        cout << "Count : " << count << endl;

        for(int i = 0; i < num.size(); i++){
            cout << "number : " << num[i] << endl;
            cout << "add" << table[num[i]][0] - table[num[i]][1] << endl;
        }
        
        count++;
    }while(next_permutation(num.begin(),num.end()));

    return 0;
}