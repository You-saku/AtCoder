#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int g1(int n){
    string s = to_string(n);
    sort(s.rbegin(),s.rend());
    return stoi(s);
}

int g2(int n){
    string s = to_string(n);
    sort(s.begin(),s.end());
    return stoi(s);
}

int f(int n){
    return g1(n)-g2(n);
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        n = f(n);
    }
    cout << n << endl;
    return 0;
}