#include<iostream>
using namespace std;
// Return the Sum (BEST PRACTICE)
//sum of n no -> using Functional way
int sumf(int n){
    if(n==0)
        return 0;

    return n + sumf(n-1);
    
}

int main(){

    int n;
    cin>>n;
    cout<< sumf(n);
     




    return 0;
}