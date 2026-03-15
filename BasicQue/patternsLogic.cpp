#include<iostream>
using namespace std;

//solid rectangle pattern
void pattern1(){
    //solid rectangle pattern
    // * * * * * 
    // * * * * * 
    // * * * * *
    
    //row - observation
    for(int row=0;row<3;row++){
        //col - observation
        for(int col =0; col<5;col++){
            cout <<"* ";
        }
        cout << endl; //after each row print a new line
    }
}

//Hollow rectangle pattern
void pattern2(int rowCount, int colCount){
    //Hollow rectangle pattern
    // * * * * * 
    // *       * 
    // * * * * *

    // //outer loop for rows
    // for(int i=0;i<3;i++){
    //     //inner loop for columns
    //     for(int j=0;j<5;j++){
    //         if(i==0 || i==2 || j==0 || j==4){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //another approach
    for(int row =0; row< rowCount;row++){
        if(row == 0 || row == rowCount-1){
            for(int col =0; col<colCount;col++){
                cout<<"* ";
            }
        }
        else{
           cout << "*";
              for(int col =0; col< colCount-2;col++){
                 cout<<"  ";
                }
                cout<<" * ";
        }
        cout<<endl;
    }

}

int main(){

    int row;
    int col;
    cin >> row;
    cin >> col;

    pattern2(row, col);

    return 0;



}