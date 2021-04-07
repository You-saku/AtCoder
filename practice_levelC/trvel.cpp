#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>course(n-1);
    int index = 0;

    // 2から最後の町を保存
    for(int i = 2; i <= n; i++){
        course[index]=i;
        index++;
    }

    int T[10][10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> T[i][j];
        }
    }

    int count = 0;

    //順列で全探索を行う
    do{
        int sum = 0;
        int start = 0;
        for(int i = 0; i < course.size(); i++){
            sum += T[start][course[i]-1];
            start = course[i]-1;
        }
        sum += T[start][0];

        if(sum == k) count++;

    }while(next_permutation(course.begin(),course.end()));

    cout << count << endl;

    return 0;
}