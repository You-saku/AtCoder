#include<iostream>

using namespace std;

int main(){
    int num,check;
    cin >> num;
    cin >> check;
    int count = 0;

    for(int i = 1; i <= num; i++){
        int tmp = i;
        do{
            if(tmp % 10 == check) {
                count++;
                break;
            }
            tmp/=10;
        }while(tmp > 0);
        
    }

    cout << count << endl;
    return 0;
}