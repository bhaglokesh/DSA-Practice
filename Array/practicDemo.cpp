#include<iostream>
using namespace std;
//Taking i/p and print double of each element

int main(){
    int size;
    cin >> size;
    int arr[size]; //VLA - Variable Length Array - not allowed in C++ but some compilers allow it as an extension

    //take size element as i/p and print their double
    for(int i =0;i<size;i++){
        cin >> arr[i];
    }

    for(int i = 0; i< size;i++){
        cout << arr[i]*2 << " ";
    }
    return 0;

}