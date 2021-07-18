#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int count = 0;
    int plugue = 1;
    while(b>plugue){
        plugue--;
        plugue+=a;
        count++;
    }
    cout << count << endl;
    return 0;
}