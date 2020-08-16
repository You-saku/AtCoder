//こっちが完成系
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    int q;

    cin >> n >> q;
    vector<int>l(q);
    vector<int>r(q);
    string words;
    //答えを格納
    vector<int>answer(q);

    //文字入力
    cin >> words;
    words = 'a' + words;

    //始点、終点セット
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i];
    }

    ///ここからチェックするゾ
    for(int i = 0; i < q; i++){
        int start = l[i]+1;
        int end = r[i];
        int sum = 0;

        while(start<=end){
            if(words.at(start-1) =='A' && words.at(start)== 'C') {
                sum++;
            }
            start++;
        }
        answer[i] = sum;
    }

    for(int i = 0; i < q; i++){
        cout << answer[i] << endl;
    }

}