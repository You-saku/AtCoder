#include<iostream>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    bool check[100010];
    int count_wa[100010];

    for(int i = 1; i <= n; i++){
        check[i] = false;
        count_wa[i] = 0;
    }

    int ac=0;
    int wa=0;

    for(int i = 0; i < m; i++){
        int number;
        string judge;
        cin >> number >> judge;
        if(check[number] == false && judge == "AC"){
            ac++;
            wa += count_wa[number];
            check[number]=true;

        }
        if(check[number] == false && judge =="WA"){
            count_wa[number]++;
        }
    }

    cout << ac << " " << wa << endl;
    return 0;
}