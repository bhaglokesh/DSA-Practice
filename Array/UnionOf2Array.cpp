#include<iostream>
#include<vector>
//union of 2 array Assume we have unique elements in both arrays and both arrays are sorted
//It can have many variation 1. ans should be sorted 2. can have duplicate val etc we will se it later

using namespace std;


int main(){

    int arr[]={1,3,5,7,9};
    int sizeA = sizeof(arr)/sizeof(arr[0]);
    int brr[]={2,4,6,8};
    int sizeB = sizeof(brr)/sizeof(brr[0]);

    vector<int> ans;


    //from arr to ans
    for(int i=0;i<sizeA;i++){
        ans.push_back(arr[i]);
    }
    //from brr to ans
    for(int i=0;i<sizeB;i++){
        ans.push_back(brr[i]);
    }

    //print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}