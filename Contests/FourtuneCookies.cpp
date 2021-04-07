#include<iostream>
#include<vector>
#include<bitset>

using std::cin;
using std::cout;
using std::endl;

int main(){
    std::vector<long long int>cookies(4);
    cin >> cookies[0] >> cookies[1] >> cookies[2] >> cookies[3];

    
        long long int sum1 = 0;
        long long int sum2 = 0;

        for(int i = 0; i <(1 << 4); i++){
            std::bitset<4>s(i);
            int sum1 = 0;
            int sum2 = 0;
            
            for(int j = 0; j < 4; j++){
                if(s[j]){
                    sum1 += cookies[j];
                }else{
                    sum2 += cookies[j];
                }
            }
            if(sum1==sum2){
                cout << "Yes" << endl;
                return 0;
            }           
        }
        cout << "No" << endl;

    return 0;
}