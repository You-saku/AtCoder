#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int n;
    cin >> n;
    int max_amount = 0;
    vector<int>orange(n);
    for(int i = 0; i < n; i++){
        cin >> orange[i];
    }



    for(int l = 0; l < n; l++){
        int hold = orange[l];
        for(int r = l; r < n; r++){
            hold = min(hold, orange[r]);
            int sum = max(max_amount,hold*(r-l+1));
            max_amount = sum;
            //cout << max_amount << endl;
        }
    }

    cout << max_amount << endl;
    

    return 0;
}