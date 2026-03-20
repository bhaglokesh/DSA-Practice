#include<iostream>
using namespace std;
//https://www.geeksforgeeks.org/problems/reverse-digit0316/1


int main(){

    int ans =0;
    int revNum = 0;
    int n;
    cin >> n;
    
    while(n>0){
        int ld = n%10;
        ans = ans*10 + ld;
        n = n/10;
    }
    cout << "reverse No: "<<ans; 
    return 0;
        
}