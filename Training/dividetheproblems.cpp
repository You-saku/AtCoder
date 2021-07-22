#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    int mid = (d.size())/2;

    sort(d.begin(), d.end());

    int ans = d[mid]-d[mid-1];

    cout << ans << endl;

    return 0;
}