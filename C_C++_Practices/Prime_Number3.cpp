//完璧
//この素数判定方法を参考にしよう
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

bool era(int num){
    if(num < 2) {
        return false;
    }else if(num==2) {
        return true;
    }else{
        if(num%2==0){
            return false;
        }else{
            int end =  sqrt(num);
            for(int i = 3; i <= end; i+=2){
                if(num%i==0) return false;
            }
        }
    }
    return true;
    
}

int main(){
    int n;
    int answer = 0;
    cin >> n;
    vector<int>numbers(n);
//入力部分
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    for(int i = 0; i < n; i++){
        if(era(numbers[i])) answer++;
            
    }
    cout << answer << endl;
}