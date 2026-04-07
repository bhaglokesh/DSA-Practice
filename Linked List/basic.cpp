/*
🧠 Problem: basic
how to declare LL,
💡 Key Idea:
- well you can use struct or class to declare a linked list node.
- both work same,
here we are using calss

🚀 Approach:
- 

⚠️ Edge Cases:
- 

⏱ TC:
📦 SC:
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data, Node* next){
        data = data;
        next = next;
    }
    //structure or class can have many 
    //constructors

    public:
    Node(int data1){
        data= data;
        next = nullptr;
    }
};
int main() {
    vector<int> arr = {1,2,3,4,5};
     Node* y = new Node(arr[0]);
     cout<< y->data;
    return 0;
}