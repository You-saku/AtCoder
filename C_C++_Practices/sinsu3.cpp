#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main(){
    int num;
    int base;
    cout << "Enter number and base." << endl;
    cin >> num >> base;
    int convert;
    string tmp = "";
    int digit = 0;

    while(num>0){
        string n = to_string(num%base);
        //cout << n << endl;
        tmp += n;
        digit++;
        num/=base;
    }
    reverse(tmp.begin(),tmp.end());

    convert = atoi(tmp.c_str());

    cout << convert << endl;

    cout << "type" << endl;
    cout << typeid(num).name() << endl;
    cout << typeid(convert).name() << endl;    
    //cout << tmp << endl;

    return 0;
}