/*
🧠 Problem: Hashing_Basic

💡 Key Idea:
- we use another array to stor count of no of 
occurance of element

🚀 Approach:
- create another arry 
- use counter as idea for array

⚠️ Edge Cases:
- 

⏱ TC:
📦 SC:
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    //precompute create hash table
    int hash[13] ={0};
    for(int i =0; i<n;i++){
        hash[arr[i]] +=1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }

    return 0;
}