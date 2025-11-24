#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    int target=5;
    vector<int> arr = {2, 4, 3, 1};
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
}