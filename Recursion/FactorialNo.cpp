#include<iostream>
using namespace std;
//factorial using recursion 
int facto(int n){
    //or direct (n==1)
    if(n == 0 )
        return 1;//yaha pe 0 rakha toh pura 0 ho jayega ladle
    return n * facto(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<< facto(n);

    return 0;
}