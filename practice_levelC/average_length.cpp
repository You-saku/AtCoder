#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
//順列から桁制限、√に階乗まで滅茶苦茶きつかった。

using namespace std;

int main(){
    int n;
    cin >> n;
    int city[10][2];
    vector<int>city_route(n);
    
    //√順番を格納
    for(int i = 0; i < n; i++){
        city_route[i] = i;
    }

    for(int i = 0; i < n; i++){
        cin >> city[i][0] >> city[i][1];
    }

    //√の数
    double all_routes = 1.0;
    for(int i = 2; i <= n; i++){
        all_routes*=i;
    }
    //cout << all_routes << endl;

    double sum = 0.0;
    cout << "output" <<endl;
    do{
        for(int i = 0; i < city_route.size()-1; i++){

            //cout << city_route[i] << " ";
            //if(i == city_route.size()-1) cout << "\n";
            int tmp1 = pow(city[city_route[i]][0]-city[city_route[i+1]][0],2.0);
            int tmp2 = pow(city[city_route[i]][1]-city[city_route[i+1]][1],2.0);
            double tmp3 =sqrtl(tmp1+tmp2);
            cout << tmp3 << endl;
            sum += tmp3;
        }
        //cout << "sum" << endl;
        //cout << sum << endl;
    }while(next_permutation(city_route.begin(),city_route.end()));

    cout << setprecision(10) << sum/all_routes << endl;
    
    return 0;
}