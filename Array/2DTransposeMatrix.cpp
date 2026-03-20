#include<iostream>
using namespace std;

//transpose of matrix
// row -> col & col -> row
int main(){

    int arr[3][3];
    int row = 3;
    int col = 3;

    // taking ip
    for(int i =0 ; i< row; i++){
        for(int j =0 ; j< col;j++){
            cin>>arr[i][j];
        }
    }

    int arrt[3][3];

    //printing transpose
    for(int i =0; i< row; i++){
        for(int j =0; j< col; j++){
            // swap(arr[i][j], arr[j][i]);
            arrt[i][j] = arr[j][i];
        }
    }
     for(int i =0 ; i< row; i++){
        for(int j =0 ; j< col;j++){
            cout<< arrt[i][j]<< " ";
        }
        cout << endl;
    }



    return 0;
}