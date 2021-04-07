#include<iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    if(s=="Y"){
        transform (t.begin(), t.end(), t.begin(), toupper);
	    cout << t << endl;
    }else{
        cout << t << endl;
    }
    return 0;
}
