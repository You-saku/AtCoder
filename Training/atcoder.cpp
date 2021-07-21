#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    int ans = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
            count++;
            ans = max(ans,count);
        }else{
            count = 0;
        } 
    }
    cout << ans << endl;
    return 0;
}