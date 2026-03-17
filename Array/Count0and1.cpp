#include<iostream>
using namespace std;
//counting 0's and 1's in an array
int main(){

    int arr[10]={0,1,0,1,1,0,1,0,1,0};
    int count0 = 0;
    int count1 = 0;

    for(int i =0; i< 10; i++){
        if(arr[i] == 0){
            count0++;
        }
        else{
            count1++;   
        }
    }
    cout<<"Number of 0's: "<<count0<<endl;
    cout<<"Number of 1's: "<<count1<<endl;


    return 0;
}