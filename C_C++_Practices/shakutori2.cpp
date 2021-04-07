//これが尺取り法
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < q; i++){
        int x; cin >> x;
        int sum = 0;
        int right = 0;

        for(int left = 0; left < n; left++){
            while(right < n && sum+a[right] <= x){
                sum+=a[right];
                right++;
            }
            cout << right-left << endl;
            if(right == left){
                right++;
            }else{
                sum-=a[left];
            }
        }
        
    }
    return 0;
}