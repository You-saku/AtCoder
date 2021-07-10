#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = b-a+1;
    if(sum < 0){
        sum = 0;
    }
    printf("%d\n",sum);
    return 0;
}