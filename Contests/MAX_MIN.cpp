#include<iostream>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int gcd(int a, int b){
    int tmp;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    int r; 
    r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}



int main(){
    int n;
    cin >> n;
    

    vector<long long int>a(n);
    int ans;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i==0){
            ans = a[i];
        }else{
            ans = gcd(ans,a[i]);
        }   
    }
    cout << ans << endl;
    return 0;
}