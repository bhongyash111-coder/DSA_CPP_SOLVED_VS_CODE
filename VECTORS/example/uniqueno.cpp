#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of array";
    int arr[]={1,1,2,2,4};
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }

        }
    }
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            cout<<arr[i];
        }
    }
}
