#include<iostream>

using namespace std;

int main(){
    int n,s,d;
    cin >> n >> s >> d;

    int x,y;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x < s && y > d){
            count++;
        }
    }

    if(count>=1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}