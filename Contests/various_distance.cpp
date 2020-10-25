#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
#include<cmath>


using namespace std;

int main(){
    int n;
    int x[100010];
    constexpr int d = 19;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int man = 0;
    int euqlid = 0;
    int chebi = -1;

    for(int i = 0; i < n; i++){
        man += abs(x[i]);
        euqlid += x[i]*x[i];
        chebi = max(chebi,abs(x[i]));
    }
    

    cout << man << endl;
    cout << setprecision(d) << sqrtl(euqlid) << endl;
    cout << chebi << endl;

    return 0;
}