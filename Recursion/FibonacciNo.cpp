#include<iostream>
using namespace std;
//In fibonacci no there is multiple recursive function call

int fibo(int n){
    if(n<=1) return n;
    int last = fibo(n-1);
    int slast = fibo(n-2);
    return last + slast;
}

int main(){
    //it will give nth term

    cout<< fibo(6);


    return 0;
}