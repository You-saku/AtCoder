#include<iostream>
#include<vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>contents(n+1);
    int num = n;
    for(int i = 2; i <= n; i++){
        while(num%i==0){
            contents[i]++;
            num/=i;
        }
    }
    for(int i = 2; i <= n; i++){
        cout << "element " << i << " = " << contents[i] << " " << endl;
    }
}