#include<bits/stdc++.h>
using namespace std;    

//what is array
//need
//declaration
//initialization


//Function to print array
void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Printing DONE"<<endl;
}
int main(){
     
    
    int size =4;
    int arr[size];
    
    
    //Taking input in array
    for(int i=0;i<size;i++)
       cin >> arr[i];
    
    //Printing Output in array
    for(int i =0;i<size;i++){
        cout << arr[i]<< " ";
    }
    
  














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

    int third[15] ={3,5};
    int m = sizeof(third)/sizeof(third[0]);
    cout<<"Size of third is "<<m<<endl;

    //character array
    char ch[5] = {'a','b','c','d','e'};
    cout<<"Character array is "<<ch[4]<<endl;

    //double array
    double d[5] = {1.2,3.4,5.6,7.8,9.0};
    // float array
    float f[5] = {1.2f,3.4f,5.6f,7.8f,9.0f};
    //bool array
    bool b[5] = {true,false,true,false,true};

     return 0;


}