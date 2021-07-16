#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0){
            if(!(a[i]%3 == 0 || a[i]%5 == 0)){
                printf("DENIED\n");
                return 0;
            }
        }
    }
    printf("APPROVED\n");
    return 0;
}