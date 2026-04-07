#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =5;
    int arr[5] = {1,2,3,4,5};
    int maxElement = INT_MIN;

    for(int i=0; i<n; i++){
        maxElement = max(maxElement, arr[i]);
    }
    cout << "Largest element in the array is: " << maxElement << endl;
    return 0;
}