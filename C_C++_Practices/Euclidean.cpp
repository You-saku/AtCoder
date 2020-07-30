#include<iostream>
using namespace std;



int main(){
    int a;
    int b;
    int tmp;
    cout << "1‚Â‚ß‚Ì”š‚ğ“ü—Í" << endl;
    cin >> a;
    cout << "2‚Â‚ß‚Ì”š‚ğ“ü—Í" << endl;
    cin >> b;

    //
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    
    int r; //—]‚è‚ğŠi”[ 
    r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    
    cout << "Å‘åŒö–ñ”‚Í[" << b << "]‚Å‚ ‚é" <<endl;
}   