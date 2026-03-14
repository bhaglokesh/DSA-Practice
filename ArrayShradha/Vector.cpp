#include<iostream>
#include<vector>
using namespace std;

int main(){


    // vector<int> vec; // vector declaration

    // cout << vec[0]; //segmentation fault

    // vector<int> vec ={1,2 ,3};

    // vector <int> vec(10,0); // vector of size 10 with all elements as 0 
      
    // for(int i: vec){
    //     cout<< i<<" " ;
    // }


    //character vector
    vector<char> v={'a','b','c'};

    cout << v.size() << endl; // size of vector
    
    v.push_back('d'); // adding element at the end of vector
    cout <<"After push back "<< v.size() << endl; // size of vector after push back
   v.pop_back(); // removing last element of vector
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
  cout<< v.at(1) << endl; // accessing element at index 1
   for(char val: v){
        cout<< val<<" " ;
    }



    return 0;
}