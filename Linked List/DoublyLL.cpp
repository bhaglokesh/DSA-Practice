/*
🧠 Problem: DoublyLL

💡 Key Idea: here are the implementation of doubly LL
- 

🚀 Approach:
-  same as singly LL but we have one more pointer in node which is prev pointer
- we have to maintain prev pointer as well while inserting or deleting a node   

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
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    //structure or class can have many 
    //constructors

    public:
    Node(int data1){
        data= data1;
        next = nullptr;
        back = nullptr;
    }
};

//array to doubly LL
Node* arrayToDoublyLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
} 
//print LL
void printDoublyLL(Node* head){
    while(head!=NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}
int main() {
    vector<int> arr ={12,5,8,7};
    Node* head = arrayToDoublyLL(arr);
    printDoublyLL(head);

  



    return 0;
}