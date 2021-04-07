//時間依存で時間内に解けない
////  俺は時間効率に弱い
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -10000000000;
    vector<int>time(n);
    for(int i = 0; i < n; i++){
        cin >> time[i];
    }

    for(int i = 1; i < n; i++){
        int end = i-1;
        int now_max;
        while(end>=0){
            now_max = time[i]-time[end];
            if(now_max>=max) max = now_max;
            end--;
        }
    }
    cout << max << endl;
}