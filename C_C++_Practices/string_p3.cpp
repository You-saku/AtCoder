#include<iostream>
#include<string>
#include<vector>

using namespace std;

int counter(char* str){
    int count =0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a') count++;
        i++;
    }
    return count;
}

int main(){
    char moji1[5];
    for(int i = 0; i < 5;i++){
        cin >> moji1[i];
    }
    cout << counter(moji1) << endl;
}