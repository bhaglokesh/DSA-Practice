#include<iostream>
using namespace std;
//2D array
//taking ip and op of 2D array
int main(){

    int arr[3][4];
    int row = 3;
    int col = 4;

    //taking input rowwise
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            cin>>arr[i][j];
        }
    }

    //accessing rowwise
    cout<<"Rowwise: "<<endl;
    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;   
}
