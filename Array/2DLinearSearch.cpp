#include<iostream>
using namespace std;
//2D array linear search

void seatchElem(int arr[3][3], int row, int col, int key){
    //searchin elem we can traverse rowise or colwise
    for(int i =0 ; i< row;i++){
        for(int j =0 ; j< col; j++){
            if(arr[i][j]==key){
             cout << "Element Found " << arr[i][j];
             return;
            }
        }
    }
    cout << "Not Found";
}
int main(){
    int arr[3][3];
    int row = 3;
    int col = 3;
   
    //taking input
    for(int i=0;i<row;i++){
        for(int j =0 ; j< col;j++){
            cin>>arr[i][j];
        }
    }
  
   
    //printing array
    for(int i =0 ; i< row; i++){
        for(int j =0 ; j< col; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }


     int key = 5;


    
   seatchElem(arr, row, col, key);



     
  return 0;

}