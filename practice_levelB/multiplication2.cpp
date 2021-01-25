#include <iostream>
#include <vector>
using namespace std;
int main(void){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(a[i] == 0){
        cout << 0 << endl;
        return 0;
        }
    }
    long long prod = 1;
    for(int i = 0;i < n;i++){
        
        if(a[i] <= 1000000000000000000/prod){
            prod *= a[i];
        }else{
            cout << -1 << endl;
            return 0;
        }
        
    
    }
    cout << prod <<endl;
    
}
