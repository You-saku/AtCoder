#include<iostream>
using namespace std;

int main(){
    int num;
    int points;
    cin >> num >> points;
    char results[200010];
    for(int i = 0; i < num; i++){
        cin >> results[i];
    }

    for(int i = 0; i < num; i++){
        if(results[i]=='o'){
            points++;
        }else if(points>0){
            points--;
        }
    }
    cout << points << endl;
    return 0;
}