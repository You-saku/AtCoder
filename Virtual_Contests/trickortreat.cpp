#include<iostream>
#include<vector>

using namespace std;

int main(){
    int count = 0;
    int n,k,d;
    cin >> n >> k;
    vector<int>have(n+1);
    for(int i=1; i<=n; i++){
        have[i] = 0;
    }

    for(int i=1; i<=k; i++){
        cin >> d;
        for(int j=1; j<=d; j++){
            int num;
            cin >> num;
            have[num]++;
        }
    }
    for(int i=1; i<=n; i++){
        if(have[i]==0){
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}