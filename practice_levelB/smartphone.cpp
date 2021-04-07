#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m,t;
    cin >> n >> m >> t;
    vector<int>a(m);
    vector<int>b(m);
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
    }
    int base = n;
    int time = 0;

    for(int i = 0; i < m; i++){
        int tmp = a[i]-time;
        n-=tmp;
        if(n<=0){
            cout << "No" << endl;
            return 0;
        }
        int tmp2 = b[i]-a[i];
        n+=tmp2;

        if(base<=n)n = base;
        time = b[i];
    }


    int last = t-time;
    if(n-last<=0){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}