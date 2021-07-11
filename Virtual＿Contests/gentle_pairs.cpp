#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int matrix[1010][2];
    for(int i=0; i<n; i++){
        cin >> matrix[i][0] >> matrix[i][1];
    }

    if(n==1){
        cout << count << endl;
        return 0;
    }

    for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(abs(matrix[j][1]-matrix[i][1]) <= abs(matrix[j][0]-matrix[i][0])){
                        count++;
                }
            }
        }

    cout << count << endl;

    return 0;
}