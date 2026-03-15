#include<iostream>
using namespace std;

void pattern1(){
    //solid rectangle pattern
    // * * * * * 
    // * * * * * 
    // * * * * *

    for(int i=0;i<3;i++){
        for(int j =0; j<5;j++){
            cout <<"* ";
        }
        cout << endl; //after each row print a new line
    }
}

int main(){

    pattern1();



}