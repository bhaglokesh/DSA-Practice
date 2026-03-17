#include<iostream>
#include<vector>
//union of 2 array Assume we have unique elements in both arrays and both arrays are sorted
using namespace std;


int main(){

    int arr[]={1,3,5,7,9};
    int sizeA = sizeof(arr)/sizeof(arr[0]);
    int brr[]={2,4,6,8};
    int sizeB = sizeof(brr)/sizeof(brr[0]);

    vector<int> ans;

    for(int i=0;i<sizeA;i++){
        ans.push_back(arr[i]);
    }

    for(int i=0;i<sizeB;i++){
        ans.push_back(brr[i]);
    }

    //print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}