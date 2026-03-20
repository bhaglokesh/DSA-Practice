#include<iostream>
using namespace std;
//https://www.geeksforgeeks.org/problems/count-digits-1606889545/1


int main(){
    int  n;
    int count = 0;
    cin >> n;
  
    while(n>0){
        int lastdigit = n%10;
        count++;
        n = n/10;
    }
    cout<< "The No od digits :"<<count;
    return 0;

 //Second approach
    //  int count = (int)(log10(n)+1);
    //  return count;
}