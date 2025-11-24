#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int buy = 0, sell = 0, profit = 0;
    for(int i=0;i<n;i++){
        buy=min(buy,arr[i]);

        
    }
    for(int i=buy;i<m;i++){
        sell=max(sell,arr[i]);
    }

    
    
}