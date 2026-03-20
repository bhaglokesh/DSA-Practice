#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int> > arr;

    vector<int> a{1,2,3};
    vector<int> b{2,4,8,10};
    vector<int> c{1,3,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i = 0; i< arr.size(); i++){
        // to get col size use arr[0]-> whe all col are same
        //use arr[i].size() -> when all col size is diff
        for(int j = 0 ; j< arr[i].size(); j++){
            cout << arr[i][j]<< " ";

        }
        cout << endl;
    }




    return 0;
}