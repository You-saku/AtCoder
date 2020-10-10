#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int n;
    cin >> n;
    vector<int>p(200010);
    for(int i = 0; i < 200010; i++){
        p[i] = 0;
    }
    
    int count = 0;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        p[num] = 1;
        while(p[count]==1){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}