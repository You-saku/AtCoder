#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int paticipation = 0;
    int paticipation_overseas = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' && paticipation < a+b){
            cout << "Yes" << endl;
            paticipation++;
            continue;
        }
        if(s[i] == 'b' && paticipation < a+b && paticipation_overseas < b){
            cout << "Yes" << endl;
            paticipation_overseas++;
            paticipation++;
            continue;
        }
        cout << "No" << endl;
    }
    return 0;
}