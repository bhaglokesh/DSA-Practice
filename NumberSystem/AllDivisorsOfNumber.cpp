#include<iostream>
#include<vector>
#include <cmath>
#include<algorithm>
using namespace std;

int main(){

    vector<int> ls;
    int n;
    cin>>n;
    //int i=1;i<=sqrt(n);i++
        
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i) != i)
            ls.push_back(n/i);
        }
    }
    //take n log n
    sort(ls.begin(), ls.end());
    for(auto val:ls){
        cout<<val<<" ";
    }

    return 0;
}