#include <iostream>
using namespace std; 

void print(int arr[],int idx, int n){
    if(idx==n){
        return;
    }
    cout<<arr[idx]<<" ";
    print(arr,idx+1,n);
}

int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,0,5);
    
}