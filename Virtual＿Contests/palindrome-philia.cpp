#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int length = s.length();
    int end = length/2;
    
    int count = 0;
    for(int i = 0; i < end; i++){
        if(s[i] != s[length-1-i]) count++;
    }

    cout << count << endl;

    return 0;
}