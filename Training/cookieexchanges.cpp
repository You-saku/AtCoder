#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && b == c && c%2==0){
        cout << -1 << endl;
        return 0;
    }
    int count = 0;
    while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
        int distribute_a = a/2;
        int distribute_b = b/2;
        int distribute_c = c/2;
        a = distribute_b + distribute_c;
        b = distribute_a + distribute_c;
        c = distribute_a + distribute_b;
        count++;
    }
    cout << count << endl;
    return 0;
}