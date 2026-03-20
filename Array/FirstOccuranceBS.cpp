#include<iostream>
#include<vector>

using namespace std;

int findFirstOccurance(int arr[], int n , int target){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s <=e){
        if(arr[mid]==target){
            //ans store
            ans = mid;
            //left me jao
            e = mid -1;
        }
        else if(target > arr[mid]){
            //right me jao
            s = mid + 1;
        }
        //galti yaha karte h hamesha
         mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int arr[] = {10,30,30,30,30,30,30,30,50,60,70,80,90};
    int target = 30;
    int size = sizeof(arr)/sizeof(int);
    int ansIndex = findFirstOccurance(arr, size, target);
    if(ansIndex == -1){
        cout << "Element not Found "<<endl;
    }
    else{
        cout<<"Element Found at Index : "<<ansIndex << endl;
    }

    return 0;
}