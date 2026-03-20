#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Need to store n -> bca at the then n become 0
    int ndup = n;
    int revNo = 0;

    while(n>0){
        int ls = n%10;
        revNo = (revNo*10)+ls;
        n = n/10;
        
    }
    if(ndup ==revNo){
        cout << "Palindrome";
    }
    else{
        cout<< "Not a palindrome";
    }
}