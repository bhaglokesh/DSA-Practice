#include<iostream>
using namespace std;

int sumArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sumArray(arr, n);
    cout << "The sum of all elements in the array is: " << result << endl;
    return 0;
}