#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={0,2,3,4,5};
    cout<<"The ans is: ";
    int max = *max_element(nums.begin(),nums.end())-*nums.begin();
    cout<<max;
    return 0;
}