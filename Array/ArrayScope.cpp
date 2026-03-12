#include<iostream>
//when you pass an array to a function, it is passed by reference. So any changes made to the array inside the function will affect the original array in the main function. This is because arrays are treated as pointers in C++.
// and do change in function will reflect in main function as well. So we can say that arrays are passed by reference in C++.
using namespace std;

void update(int arr[], int n){

    cout << "Inside the function: " << endl;
   
    //updating the array first element
    arr[0] = 10;
   
    //printing the array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr[3] = {1, 2, 3};
    update(arr, 3);

    //printing the array
    cout<<"Printing in main function: "<<endl;  
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}