#include<iostream>
#include<vector>
using namespace std;

class Sum{
    public: int add(int a, int b){
        return a+b;
    }
};

int main(){
    Sum sum;

    cout << sum.add(1,1) << endl;
    return 0;
}
