#include <iostream>
#include <vector>
using namespace std;

int main() {
int arr[]={3,4,2,1,7,6,8,1,5}; //declare arr
int size=sizeof(arr)/sizeof(arr[0]);//number of ele
int targetsum;                                 
cout<<"enter the  target sum";
cin>>targetsum;
int pairs =0;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]+arr[j]==targetsum){
            pairs++;
        }
    }
}
cout<<pairs;
}
