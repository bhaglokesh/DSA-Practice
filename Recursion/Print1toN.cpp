#include<iostream>
using namespace std;
//print 1 to N using recursion
void pfn(int i, int n){
    if(i>n)
        return;
    cout<<i<<" ";
    pfn(i+1,n);
}

int main(){
    int n;
    cin >>n;

    pfn(1,n);



    return 0;
}