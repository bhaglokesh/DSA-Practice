/*
🧠 Problem: Hashing_Using_Map

💡 Key Idea:
-

🚀 Approach:
-

⚠️ Edge Cases:
- Store unordered_sorted
- order you cant deside and you dont know

⏱ TC: 2N -> O(n)
📦 SC:
*/

#include <bits/stdc++.h>
using namespace std;
//map store all the value in sorted order 
int main() {
    int n; //no of elem in array
    cin >> n;
    int arr[n];
    unordered_map<int, int> map; //can merge in this loop also
    for(int i = 0;i<n;i++){
        cin >> arr[i]; 
        //for stori ng into unordered_map ->
        // worst case O(n)-> n= no of element in U_map
         map[arr[i]]++; //later added
    }

    //pre-compute create hash
    //you can also do map<long, long> -> for big val
   /*
    map<int, int> map; 
    for(int i = 0;i<n;i++){
        map[arr[i]]++;
    }
    */ 

    //iterator on Unordered_map* to check ke ye sorted nahi hai
    for(auto it : map){
        cout << it.first << "->" <<it.second << endl;

    }


    int q; //no of elem to be search
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << map[number]<<endl;
    }

    return 0;
}