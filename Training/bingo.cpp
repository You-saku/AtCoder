#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a[3][3];
    bool boolean[3][3];
    for(int i=0; i < 3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
            boolean[i][j] = false;
        }
    }
    int n;
    cin >> n;
    vector<int>b(n);
    for(int i=0; i < n; i++){
        cin >> b[i];
        for(int j=0; j < 3; j++){
            for(int k=0; k<3; k++){
                if(a[j][k] == b[i]){
                    boolean[j][k] = true;
                }
            }
        }
    }

    string ans = "No";
    for(int i=0; i < 3; i++){
        if(boolean[i][0] && boolean[i][1] && boolean[i][2]) ans = "Yes";
    }

    for(int i=0; i < 3; i++){
        if(boolean[0][i] && boolean[1][i] &&  boolean[2][i]) ans = "Yes";
    }

    if(boolean[0][0] && boolean[1][1] && boolean[2][2]) ans = "Yes";
    if(boolean[0][2] && boolean[1][1] && boolean[2][0]) ans = "Yes";
    cout << ans << endl;
    return 0;
}