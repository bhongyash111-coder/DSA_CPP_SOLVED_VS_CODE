#include <bits/stdc++.h>
using namespace std;




int main(){//defining vector of specific size
    vector<int>num(10);
    
    //defining vector of specific size of all element 0
    vector<int>nums(10,0);
    // print the vector
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}