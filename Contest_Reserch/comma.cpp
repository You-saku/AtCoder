#include<iostream>

using namespace std;

int main(){
    int N;
    int all_count = 0;
    cin >> N;
    
    if(N>=1000){
        for(int i = 1000; i <= N; i++){
            int count = 0;
            int number = N;
            while(number>999){
                number/=1000;
                count++;
            }
            all_count += count; 
        }
    }
    cout << all_count << endl;
    return 0;
}