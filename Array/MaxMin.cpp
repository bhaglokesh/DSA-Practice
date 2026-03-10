#include<bits/stdc++.h>
//find maximum and minimum element\
// arr [4,12,8,10]
// max=12 , min=4
using namespace std;

int getMAx(int num[], int n){


    //default function
    
     int maxi= INT_MIN;
    for(int i=0;i<n;i++){
       maxi = max(maxi, num[i]);
    //     if(num[i]>max){
    //         max=num[i];
    //     }
     }
    //return max val
    return maxi;
}
int getMin(int num[], int n){
    int min= INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    //return min val
    return min;
}
using namespace std;
int main(){
    int size;
    cin>>size;
    int  num[100];


    //taking input in array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Max element is "<<getMAx(num,size)<<endl;
    cout<<"Min element is "<<getMin(num,size)<<endl;

}