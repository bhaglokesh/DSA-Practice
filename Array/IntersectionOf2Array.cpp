#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> arr1 = {1,2,3,3,4,5};
    vector<int> arr2 = {3,4,5,3,6,7};

    vector<int> ans;
    //outer loop on arr1 vector
    for(int i=0;i<arr1.size();i++){
        //for every element, loop on arr2 vector
        for(int j=0;j<arr2.size();j++){
            if(arr1[i] == arr2[j]){
                // Check if the element is already in the answer vector
                //agar -ve val hai toh use INT_MIN
                arr2[j] = -1; // Mark the element in arr2 as used   
                ans.push_back(arr1[i]);
            }
        }
    }

    //printing elem
    for(int val : ans){
        cout<<val<<" ";
    }


    return 0;
}
