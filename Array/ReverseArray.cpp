#include<iostream>
//logic to reverse even adn odd array

using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Printing DONE"<<endl;
}


void reverseArray(int arr[], int n){
   int start =0;
   int end = n-1;

   while(start<=end){
     swap(arr[start],arr[end]);
     start++;   
     end--;
   }
}

int main(){

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverseArray(arr,6);
    reverseArray(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;



    // int n = sizeof(arr)/sizeof(int);


}



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