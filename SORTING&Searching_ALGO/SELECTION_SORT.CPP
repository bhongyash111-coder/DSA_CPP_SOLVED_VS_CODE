#include<iostream>
using namespace std; 


//ALL CODE DONE BY ME GOOD

void selection_sort(int arr[], int n){
    for(int i =0;i<n-1;i++){
      int min_idx = i;
        for(int j =i+1;j<n;j++){
            if(arr[i]> arr[j]){
                swap(arr[j],arr[i]);
            }

        }
    }
}

int main(){
    int arr[]={66,1,4,5,3,22,12,34};
    int n=7;
    selection_sort(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}