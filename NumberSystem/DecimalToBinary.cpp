#include<iostream>
#include<math.h>
using namespace std;

int main(){


    int n;

    cin >> n;

    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n & 1; // get the last bit of n
        ans = (bit * pow(10, i)) + ans; // add the bit to the answer
        n = n >> 1; // right shift n by 1 to get the next bit
        i++; // increment the power of 10
    }
    cout << "Answer is : " << ans << endl;
}