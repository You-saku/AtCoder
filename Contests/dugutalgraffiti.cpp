//マジで悔しい解けたかもしれないのに時間が無かった
#include<iostream>


using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    char matrix[15][15];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> matrix[i][j];
        }
    }

    int number_matrix[15][15];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            //ここで縦欲を観て黒の数で枠を考えていく
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i-1][j] && matrix[i][j] == matrix[i][j-1]) number_matrix[i][j] = 0;
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i-1][j]) number_matrix[i][j] = 1;
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i][j-1]) number_matrix[i][j] = 1;
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i][j-1] && matrix[i][j] == matrix[i-1][j]) number_matrix[i][j] = 1;
            if(matrix[i][j]=='#' && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i-1][j] && matrix[i][j] == matrix[i][j-1]) number_matrix[i][j] = 1;

            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i+1][j]) number_matrix[i][j] = 2;
            if(matrix[i][j]=='#' && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i][j-1]) number_matrix[i][j] = 2;
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i][j-1] && matrix[i][j] == matrix[i-1][j]) number_matrix[i][j] = 2;
            if(matrix[i][j]=='#' && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i-1][j] && matrix[i][j] == matrix[i][j-1]) number_matrix[i][j] = 2;
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i-1][j]) number_matrix[i][j] = 2;
            if(matrix[i][j]=='#' && matrix[i][j]==matrix[i][j+1] && matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i][j-1]) number_matrix[i][j] = 2;
        }
    }

    //最終的に端の4つ角が2,2,2,2なら4角、それ以外なら和で出せるのでは? 
    

    return 0;
}