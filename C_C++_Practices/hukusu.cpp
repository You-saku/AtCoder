#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    char **array = new char*[n];
    char inputs;
    for(int i = 0; i < n; i++){
        
    }

    for(int i = 0; i < n; i++){
        cout << sizeof(array[i])/sizeof(char) << endl;
    }
}