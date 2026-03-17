#include<iostream>
#include<vector>
using namespace std;
//find unique element in a vector where every element is present twice except one element which is present once

//[1,2,4,2,1,3,6,5,5,6,4] -> 3


int findUniqueNo(vector<int> arr){
    int unique = 0;
    for(int i=0;i<arr.size();i++){
        unique = unique ^ arr[i];
    }
    return unique;
}


int main(){

   //taking vector as a input
   int n;
   cout<<"Enter the size of array "<<endl;
   cin>>n;
   vector<int> arr(n);
   cout<<"Enter the elements of array "<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int unique = findUniqueNo(arr);
   cout<<"Unique element is "<<unique<<endl;




    return 0;
}