#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,3,4,6,7,9};
    int arr2[]={2,5,8,10};
    int n = sizeof(arr1)/4;
    int m = sizeof(arr2)/4;

    int result[m+n];
    int i=0, k=0, j=0;

    for(int k=0 ; k<m+n ; k++){
        if(i<n && (j>=n|| arr1[i]<arr2[j])){
            result[k]=arr1[i];
            i++;
            
        }
        else{
             result[k]=arr2[j];

            j++;
        } 
       
 
    } for (int s = 0; s < k; s++) {
    cout << result[s] << " ";
}

}