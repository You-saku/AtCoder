#include<iostream>

using namespace std;

/*ユークリッドの互除法を関数化
戻り値は最大公約数
*/
int Euclidean(int a, int b){
    int tmp;

    if(a<b){
            tmp = a;
            a = b;
            b = tmp;
        }
    
    int r; //余りを格納 
    r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}
//

int main(){
    int gcd_sum = 0; //最大公約数の合計
    int K;

    cout << "Please Input Number" << endl;
    cin >> K;
    for(int n = 1; n <= K; n++){
        for(int o = 1; o <= K; o++){
            int gcd2 = Euclidean(n,o);
            for(int p = 1; p <= K; p++){
                int gcd3 = Euclidean(gcd2,p);
                gcd_sum += gcd3;
            }
        }
    }
    cout << gcd_sum << endl;
}