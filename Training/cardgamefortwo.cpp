#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(),std::greater<int>{});
    int sum_alice = 0;
    int sum_bob = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            sum_alice+=a[i];
        }else{
            sum_bob+=a[i];
        }
    }
    cout << sum_alice - sum_bob << endl;
    return 0;
}