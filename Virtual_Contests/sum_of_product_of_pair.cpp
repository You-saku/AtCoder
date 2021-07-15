#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long>a(n);
    vector<long long>b(n+1);
    b[0] = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[i+1] = b[i]+a[i];
    }
    long long ans = 0;

    for(int i=0; i<n; i++){
        long long tmp;
        tmp = (b[n]-b[i+1])%1000000007;
        ans += a[i]*tmp;
        ans%=1000000007;
    }

    cout << ans << endl;
    return 0;
}