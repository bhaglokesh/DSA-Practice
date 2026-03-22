/*
🧠 Problem: Character_Hashing

💡 Key Idea:
- We store occurance of char in hash array
- size of hash array ca be 26 or 255 both have diff approach
- in this file hash -> 26 size

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
    int hash[26]={0};
    for(int i =0; i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q; //no of character you wnat to count search 
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c-'a']<<endl;
    }
    return 0;
}