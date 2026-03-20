#include<iostream>
using namespace std;


void printRowWiseSum(int arr[][3], int row, int col){
   //row sum -> row-wise traversal
   cout<<"Printing Row-wise sum: "<<endl;
   for(int i = 0; i < row; i++){
       int sum = 0;
       for(int j = 0; j < col; j++){
           sum += arr[i][j];
       }
       cout << sum << endl; 

   }
}


//2D array row sum
int main(){

    int arr[3][3];
    int row = 3;
    int col = 3;

    //taking input rowwise
    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            cin>>arr[i][j];
        }
    }

    //printing row sum
    for(int i = 0; i< row; i++){
   
        for(int j = 0; j< col; j++){
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
        
    }

    printRowWiseSum(arr, row, col);
    


    return 0;
}