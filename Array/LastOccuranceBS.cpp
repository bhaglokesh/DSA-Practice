#include<iostream>
#include<vector>

//TC -> long n

using namespace std;

int lastOccurance(int arr[], int n , int target){
    int s = 0;
    int e = n-1;
    // mid = s + (e-s)/2
    int mid = (s+e)/2;
    int ans = -1;

    while(s <=e){
        if(arr[mid]==target){
            //ans store
            ans = mid;
            //Right me jao
            s = mid +1;
        }
        else if(target > arr[mid]){
            //Righy me jao
            s = mid + 1;
        }
        else if(target < arr[mid]){
            //left me jao
            e = mid -1;
        }
        //galti yaha karte h hamesha
         mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int arr[] = {10,30,30,30,30,30,30,40,50,60,70,80,90};
    int target = 30;
    int size = sizeof(arr)/sizeof(int);
    int ansIndex = lastOccurance(arr, size, target);
    if(ansIndex == -1){
        cout << "Element not Found "<<endl;
    }
    else{
        cout<<"Element Found at Index : "<<ansIndex << endl;
    }

    return 0;
}