#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum_a = 0; 
    int sum_b = 0;

    int tmp;
    tmp = int(a/100);
    sum_a = sum_a + tmp;
    a-=tmp*100;

    tmp = int(a/10);
    sum_a = sum_a + tmp;
    a-=tmp*10;

    sum_a = sum_a+a;


    tmp = int(b/100);
    sum_b = sum_b + tmp;
    b-=tmp*100;

    tmp = int(b/10);
    sum_b = sum_b + tmp;
    b-=tmp*10;

    sum_b = sum_b+b;

    cout << max(sum_a,sum_b) << endl;

    return 0;
}