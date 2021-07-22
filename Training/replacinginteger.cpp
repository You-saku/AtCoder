#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    long long ans = n%k;
    ans = min(ans, k-ans);
    cout << ans << endl;
    return 0;
}