#include<iostream>
#include<string>

using namespace std;

int main(){
    string S;
    cin >> S;
    int length = S.length();

    for(int i = 0; i < length; i+=2){
        if(isupper(S[i])){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i = 1; i < length; i+=2){
        if(islower(S[i])){
            cout << "No" << endl; 
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}