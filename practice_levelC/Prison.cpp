#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    int count = 0;

    cin >> n >> m;
    vector<int> key(n);
    //初期化//
    for(int i = 0; i < n; i++){
        key[i] = 0;
    }

    for(int i = 0; i < m; i++){
        int start = 0;
        int end = 0;
        cin >> start >> end;
        for(int j = start-1; j < end; j++){
            key[j]++;
        }
    }

    for(int i = 0; i < n; i++){
        if(key[i]==m){
            count++;
        }else{
            continue;
        }
    }
    cout << count << endl;

}
