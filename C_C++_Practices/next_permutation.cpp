#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//順列の使い方

int main(){
    //配列バージョン
    vector<int>v2 = {1,2,3};
    do{
       for(int i = 0; i < v2.size(); i++){
           cout << v2[i];
           if(i != v2.size()-1) cout << " ";
       } 
       cout << endl;
    }while (next_permutation(v2.begin(),v2.end()));
    
    cout << endl;
    cout << "next_ver" << endl;


    //vectorバージョン
    vector<int>v = {2,3,1};
    do{
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
            if(i != v.size()-1) cout << " ";
        }
        cout << endl;
    }while (next_permutation(v.begin(),v.end()));
    
}