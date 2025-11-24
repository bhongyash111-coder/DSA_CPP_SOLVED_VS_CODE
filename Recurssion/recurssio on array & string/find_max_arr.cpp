#include<iostream>
using namespace std;

int max_ele(int arr[],int idx,int n){
    if(idx==n-1){  
        return arr[idx];
    } //basecase
    return max(arr[idx],max_ele(arr,idx+1,n));
}

int main(){
    int arr[6]={9,1,2,3,4,5};
    cout<<max_ele(arr,0,6);
}