#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>All(n);
    vector<vector<int>> PQ(2,vector<int>(n));

    //順列つくり
    for(int i = 1; i <= n; i++){
        All[i-1] = i;
    }

    //入力
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin >> PQ[i][j];
        }
    }

    int count = 1;
    int a,b;

    do{
        int check1 = 0;
        int check2 = 0;
        for(int i = 0; i < All.size(); i++){
            if(PQ[0][i] == All[i]) check1++;

            if(PQ[1][i] == All[i]) check2++;
        }
        if(check1==n) a = count;
        if(check2==n) b = count;
        count++;

    }while(next_permutation(All.begin(),All.end()));

    cout << abs(a-b) << endl;

    return 0;
}