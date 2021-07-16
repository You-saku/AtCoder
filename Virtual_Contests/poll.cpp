#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

// 考え方は悪くなかった。
// しかし、実装にセンスがなかった。mapのことを知らなすぎた。
int main(){
    int n;
    cin >> n;
    map<string, int> S;
    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        S[tmp] += 1;
    }
    int max = 0;
    for(auto i: S){
        int tmp = i.second;
        max = std::max(max, tmp);
    }

    for(auto i: S){
        if(i.second == max) cout << i.first << endl;
    }

    return 0;
}