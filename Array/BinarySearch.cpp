#include<iostream>
using namespace std;


bool bSearch(int arr[], int size, int key){
     
    int start=0;
    int end = size-1;
    int mid = (start + end)/2;

  while(start<=end){
    if(arr[mid] == key){
        cout<<"Element found at index: "<<mid<<endl;
        return true;
    }
    else if(arr[mid] < key){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid = (start + end)/2;
  }
  cout<<"Element not found"<<endl;
  return -1;
}


int main(){


    int evenArr[8]={5,2,9,4,7,6,1,0};
    int oddArr[5]={11,33,8,76,43};


    bSearch(evenArr,8,7);
    bSearch(oddArr,5,8);




    return 0;
}