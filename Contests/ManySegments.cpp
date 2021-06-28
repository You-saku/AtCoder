#include<iostream>

using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;
    int t;
    int l[2010];
    int r[2010];
    for(int i = 0; i < n; i++){
        cin >> t >> l[i] >> r[i];
        if(t==2){
            l[i] = 2*l[i];
            r[i] = 2*r[i]-1;
        }
        if(t == 3){
            l[i] = 2*l[i]+1;
            r[i] = 2*r[i];
        }
        if(t == 4){
            l[i] = 2*l[i]+1;
            r[i] = 2*r[i]-1;
        }
        if(t==1){
            l[i] = 2*l[i];
            r[i] = 2*r[i];
        }
    }

    for(int i = 0; i <= n-1; i++){
        for(int j = i+1; j < n; j++){
            if(max(l[i],l[j]) <= min(r[i],r[j])) count++;
        }
    }
    cout << count << endl;
    return 0;
}