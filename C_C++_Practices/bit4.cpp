// bitで全組み合わせ列挙
// これが大事,滅茶苦茶大事

#include<iostream>
#include<bitset>
#include<vector>

using namespace std;

int main(){
    int n = 4;
    for(int bit = 0; bit < (1<<n); ++bit){ // n-1番目のビットが１かどうかまで繰り返す
        vector<int>S;// 配列宣言
        for(int i = 0; i < n; i++){
            if(bit & (1<<i)) S.push_back(i); //vector.push_back() = 要素を後ろへプッシュする。
        }

        cout << bit << ": {";
        for(int i = 0; i < (int)S.size(); i++){
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}