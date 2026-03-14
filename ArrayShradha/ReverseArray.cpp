//reverse and std::array, N> ;

#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    
    int start=0;\
    int end = size -1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    
    
}

int main()
{
    
    int arr[5] = {4,5, 3,7, 6};
    
    reverseArray(arr,5);
    
    return 0;
}