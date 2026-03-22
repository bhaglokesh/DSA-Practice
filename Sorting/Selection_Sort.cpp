/*
🧠 Problem: Selection_Sort 
[13, 46, 24, 52, 20,9]
op-> 9 13 20 24 46 52

💡 Key Idea:
- it sort in n-1 pass , n-> no of element

🚀 Approach:
- start from arr[0] - compare with rest
- similarly increase it by one etc...

⚠️ Edge Cases:
- https://www.youtube.com/watch?v=g-PGLbMth_g

⏱ TC: O(n^2)-> Best,worst, avg -> same
📦 SC:
*/

#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]< arr[mini]){
                mini = j;
            }
        }
        //swap(arr[mini],arr[i]);
        int temp  = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n; //no of element
    cin >> n;

    int arr[n];
    //take i/p
    for(int i = 0;i<n;i++) cin >> arr[i];
    selection_sort(arr,n);
    //print
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}