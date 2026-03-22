/*
🧠 Problem: Hashing_Using_Map

💡 Key Idea:
- here we use map to avoid the range erro in int hashing
- in map  it only store the no of unique element in an array
- map store in sorted order

🚀 Approach:
- define map and increase count in loop for particular index
- defauly val is 0 if not increase the count

⚠️ Edge Cases:
- Store sorted

⏱ TC:
📦 SC:
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; //no of elem in array
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i]; 
    }

    //pre-compute create hash
    //you can also do map<long, long> -> for big val
    map<int, int> map; 
    for(int i = 0;i<n;i++){
        map[arr[i]]++;
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