#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//順列の使い方

int main(){
    //順列で要素を列挙することに成功
    vector<int>v2 = {1,2,3};
    int num[3];
    for(int i = 0; i < 3; i++){
        cin >> num[i];
    }

    do{
       for(int i = 0; i < v2.size(); i++){
           cout << num[v2[i]-1];
           if(i != v2.size()-1) cout << " ";
       } 
       cout << endl;
    }while (next_permutation(v2.begin(),v2.end()));
    return 0;   
}