#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//for binary search make sure your array need to be in sorted order


bool bSearch(int arr[], int size, int key){
     
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;

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
    mid = start + (end-start)/2;
  }
  cout<<"Element not found"<<endl;
  return -1;
}


int main(){


    int evenArr[8]={6,8,23,45,67,88,90,99};
    int oddArr[5]={11,22,25,34,45};

    vector<int> v{34,44,56,65,76,87,99};
    int arr[] ={4,5,7,8,9,10,23,43,55};
    int size = sizeof(arr)/sizeof(int);

    //if(binary_search(v.begin(), v.end(),56))  ->>>> for vector
    if(binary_search(arr, arr+size,43)){
        cout << "Element found" << endl;
    }
    else{
        cout << " element not found";
    }


    bSearch(evenArr,8,45);
    bSearch(oddArr,5,25);




    return 0;
}