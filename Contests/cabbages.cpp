#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,a,x,y;
    cin >> n >> a >> x >> y;
    int ans;
    if(n >= a){
        ans = a*(x-y)+n*y;
    }else{
        ans = n*x;
    }
    cout << ans << endl;
    return 0;
}