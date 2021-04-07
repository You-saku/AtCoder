#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    vector<int>weight(n);
    for(int i = 0; i < n; i++){
        weight[i] = i+1;
        //cout << weight[i] << endl;
    }

    
    int max = 0;
    int sum = 0;
    //sortする
    sort(a.begin(),a.end());
    //ソートして昇順にしないと順列できないよ
    //順列にしたいベクトルは昇順にしろよ
    do{
        for(int i = 0; i < a.size(); i++){
            sum += a[i]*weight[i];
            cout << "weight : " << weight[i] << endl;
        }
        if(sum > max) max = sum;

        sum = 0;
    }while(next_permutation(a.begin(),a.end()));

    cout << max << endl;
    return 0;
}