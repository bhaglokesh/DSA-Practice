#include<iostream>
using namespace std;
//Option 2: Your Approach (Parameter Passing)
//return sum of first N number

void sumf(int i, int sum){
    if(i<1){
        cout << "sum : "<<sum;
        return;
    }

    sumf(i-1,sum+i);
}

int main(){
    int n;
    cin>>n;

    sumf(n,0);
}