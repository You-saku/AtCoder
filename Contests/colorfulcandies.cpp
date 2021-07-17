#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<long>c(n+1);
    c[0] = 0;
    map<int,int>map;
    for(int i=1; i <= n; i++){
            cin >> c[i];
    }
    for(int i=1; i <= k; i++){
            map[c[i]]+=1;
    }
    int max = map.size();
    
    for(int i = k+1; i <= n; i++){
        map[c[i]]+=1;
        map[c[i-k]]--;
        if(map[c[i-k]]==0) map.erase(c[i-k]);
        int count = map.size();
        max = std::max(max,count);
    }

    printf("%d\n", max);
    return 0;
}