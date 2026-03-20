#include<iostream>
#include<limits.h>
using namespace std;
// printing max and min elem in 2d array


void printMaxMin(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i =0 ; i< row; i++){
        for(int j=0 ; j < col; j++){
            if(arr[i][j]>maxi){
               maxi = arr[i][j];
            }
            if(arr[i][j]< mini)
               mini = arr[i][j];
        }
    }
    cout << "Maximum element : " << maxi << endl;
    cout << "Minimum element : " << mini<< endl;
}
int main(){
    int arr[3][3];
    int row = 3;
    int col =3;

    for(int i=0;i<row;i++){
        for(int j=0; j< col;j++){
            cin>> arr[i][j];
        }
    }

    //printing matrix
    for(int i=0;i< row; i++){
        for(int j=0; j< col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printMaxMin(arr, row, col);




    return 0; 
}