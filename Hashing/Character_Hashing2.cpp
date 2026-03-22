/*
🧠 Problem: Character_Hashing 2

💡 Key Idea:
- 2nd version of hashing where we took hash table as 255


🚀 Approach:
- 

⚠️ Edge Cases:
- 

⏱ TC:
📦 SC:
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    //pre compute create hash 
    //here we mention 256 so no need to create separate for small and capital
    int hash[256]={0};
    for(int i =0; i<s.size();i++){
        hash[s[i]]++;
    }

    int q; //no of character you wnat to count search 
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c]<<endl;
    }
    return 0;
}