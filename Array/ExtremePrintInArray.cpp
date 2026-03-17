#include<iostream>
using namespace std;
//print extreme in array
//[8,6,5,3,8,9]
//o/p : [8,9,6,8,5,3]

int main(){

    int arr[7]={8,6,5,3,8,9,7};
    int n=7;
    int start =0;
    int end=n-1;

    for(int i =0 ;i< n;i++){
       if(start> end)
        break;
       
        if(start == end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" "<<arr[end]<<" ";
          
        }
        start++;
        end--;
        
    
           

    }
    return 0;
      
}