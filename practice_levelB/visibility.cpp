#include<iostream>

using namespace std;

int main(){
    string matrix[110];
    int h,w,x,y;
    int count = -3;

    cin >> h >> w >> x >> y;
    for(int i=0; i < h; i++){
        cin >> matrix[i];
    }
    
    for(int i=x-1; i >= 0; i--){
        if(matrix[i][y-1]=='#') break;

        count++;
    }

    for(int i=x-1; i < h; i++){
        if(matrix[i][y-1]=='#') break;

        count++;
    }

    for(int i=y-1; i >= 0; i--){
        if(matrix[x-1][i]=='#') break;

        count++;
    }

    for(int i=y-1; i < w; i++){
        if(matrix[x-1][i]=='#') break;
        
        count++;
    }
    
    printf("%d\n",count);
    return 0;
}