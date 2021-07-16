#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b!=c) {
        printf("Yes\n");
        return 0;
    }

    if(c==b && b!=a) {
        printf("Yes\n");
        return 0;
    }

    if(a==c && b!=c) {
        printf("Yes\n");
        return 0;
    }

    printf("No\n");

    return 0;
}