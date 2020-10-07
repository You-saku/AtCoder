#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    vector<int>p(n);

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    if(p.size()==0){
        cout << x << endl;
        return 0;
    }

    sort(p.begin(),p.end());
    
    int ans;
    int distance = 1000000;


    for(int i = 0; i <= 101; i++){
        if(std::find(p.begin(),p.end(),i) != p.end()){
            continue;
        }
        
        int distance2 =  abs(x-i);
        if(distance2 < distance){
            distance = distance2;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}