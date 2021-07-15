#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>x(n);

    int ans = 1000000000;
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    
    sort(x.begin(), x.end());

    int length = x.size();

    int min = x[0];
    int max = x[length-1];
    int sum;
    for(int i = min; i <= max; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum+=(x[j]-i)*(x[j]-i);
        }
        ans = std::min(ans,sum);
    }
    cout << ans << endl;

    return 0;
}