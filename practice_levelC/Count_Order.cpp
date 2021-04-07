#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    //入力//
    cin >> n;
    vector<int> num(n);
    vector<int> p(n);
    vector<int> q(n);
    

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }

    for(int i = 0; i < n; i++){
        num[i] = i+1;
    }
    sort(num.begin(),num.end());
    
    int A,B = 0;
    int count = 0;
///////////辞書探索(全探索法)///////
    do{
        int p_cnt = 0;
        int q_cnt = 0;
        
        for(int i = 0; i < n; i++){
            if(num[i] == p[i]) p_cnt+=1;
            if(num[i] == q[i]) q_cnt+=1;
        }
        count+=1;
        if(p_cnt == n)A = count;
        if(q_cnt == n)B = count;
    }while(next_permutation(num.begin(),num.end()));
    cout << abs(A-B) << endl;
    return 0;
}