#include<iostream>
using namespace std;
//Check string is palindrome or not using recursion
bool fun(int i, string &s){
    if( i>= s.size()/2) return true;
    if(s[i]!= s[s.size()-i-1]) return false;
    return fun(i+1,s);
}


int main(){
    string s = "madsm";
    if(fun(0,s)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}