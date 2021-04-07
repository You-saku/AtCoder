//尺取りなし
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>a(n);
    vector<int>x(q);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        cout << "count : " << i << endl;
        int left,right;
        for(left = 0; left < n; left++){
            int sum = 0;
            right = left;
            while(right<n && sum+a[right] <= x){
                sum+=a[right];
                right++;
            }
            cout << right-left << endl;
        }
        
    }

    return 0;
}