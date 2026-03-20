#include<iostream>
using namespace std;
void pf(int i,int n){

    if(i>n)
        return;
    cout<<"Lokesh "<<endl;
    pf(i+1,n);
}

int main(){
    int n;
    cin>>n;
    int i =1;
    pf(i,n);



    return 0;
}