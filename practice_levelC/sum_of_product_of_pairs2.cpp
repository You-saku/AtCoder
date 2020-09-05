#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int mod = 1000000007;
    long long int sum = 0;
    long ans = 0;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    for(int i = 0; i < n; i++){
        sum -= a[i];
        ans += a[i]*sum;
    }
    ans%=mod;
    cout << ans << endl;
}