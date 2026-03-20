#include<iostream>
using namespace std;
//printing in reverse order recursion

void pfn(int i , int n){
    if(i<1)
        return;
    cout<<i<<" ";
    pfn(i-1,n);
}

int main(){
    int n;
    cin>> n;
    pfn(n,n);

    return 0;
}