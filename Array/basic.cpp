#include<bits/stdc++.h>
using namespace std;    


//Function to print array
void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Printing DONE";
}
int main(){
     
    //declaring array of size 10
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    arr[1]=0;
    // cout<<arr[8]<<endl;

    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);


    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}