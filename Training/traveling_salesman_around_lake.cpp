#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int k,n;
    cin >> k >> n;
    vector<int>a(n);
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    int ans = a[n-1] - a[0];
    for(int i = 1;i < n; i++){
        int part1 = k - a[i];
        int part2 = a[i-1];
        ans = min(ans, part1+part2);
    }
    cout << ans << endl;
    return 0;
}