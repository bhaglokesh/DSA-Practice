#include<iostream>
#include<vector>
//pair sum - find all pairs in an array whose sum is equal to a given target
using namespace std;



int  main(){

    vector<int> arr = {1,2,3,4,5,6};
    int target = 7;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j] == target){
                cout<<"Pair is "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }





    return 0;

}