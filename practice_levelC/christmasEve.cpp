#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int>h(N);
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    sort(h.begin(),h.end());

    long long int min =  10000000000000000;

    for(int i = 0; i < N-K+1; i++){
        if(h[i+K-1]-h[i]<min){
            min = h[i+K-1]-h[i];
        }
    }
    
    
    cout << min << endl;
    
    return 0;
}