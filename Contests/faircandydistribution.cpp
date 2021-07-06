#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    std::vector<int>a(n);
    std::vector<int>b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    std::sort(a.begin(), a.end());
    std::vector<int>candy(n);
    for(int i = 0; i < n; i++){
        candy[i] = 0;
    }
    
    int all_dis = 0;
    if(k>=n){
        all_dis = k/n;
        k -= all_dis*n;
    }

    for(int i=0; i < k; i++){
        int target = a[i];
        auto ite = find(b.begin(),b.end(),target);
        int index = distance(b.begin(), ite);
        candy[index]++;
    }

    for(int i = 0; i < n; i++){
        cout << all_dis+candy[i] << endl;
    }

    return 0;
}