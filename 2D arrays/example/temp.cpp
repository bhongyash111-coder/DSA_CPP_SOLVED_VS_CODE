#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,65,7,6,2,1,23,55};
    int n=sizeof(arr)/sizeof(arr[0]);

    
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<=n;i+=2){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
