#include<iostream>
using namespace std;
//2D array colsum
void colSum(int ar[][3], int row, int col)
{
    for(int j = 0; j < col; j++)
    {
        int sum = 0;
        for(int i = 0; i < row; i++)
        {
            sum += ar[i][j];
        }
        cout << "Sum of column " << j << ": " << sum << endl;
    }
}

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

    //printing matrix
    for(int i = 0; i< row; i++){    
        for(int j = 0; j< col; j++){
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
        
    }

    //col sum -> col-wise traversal
    colSum(arr, row, col);



}



