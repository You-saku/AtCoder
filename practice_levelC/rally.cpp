#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>x(n);

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int min = *min_element(x.begin(),x.end());
    int max = *max_element(x.begin(),x.end());
    

    int cost = 1000000000;

    for(int i = min; i <= max; i++){
        int ans = 0;
        for(int j = 0; j < n; j++){
            ans += (x[j]-i)*(x[j]-i);
        }
        if(ans < cost) cost = ans;
    }

    cout << cost << endl;

    return 0;
}