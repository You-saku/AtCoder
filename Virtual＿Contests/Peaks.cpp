#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>h(n+1);
    vector<bool>h_a(n+1);

    int count = 0;

    for(int i=1; i<=n; i++){
        cin >> h[i];
        h_a[i] = true;
    }

    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        if(h[a]>=h[b]) h_a[b] = false;
        if(h[a]<=h[b]) h_a[a] = false;
    }

    for(int i=1; i<=n; i++){
        if(h_a[i]){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}