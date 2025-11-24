#include<iostream>
#include<map>
#include<vector>
#include<algorithm> 
using namespace std;
void removeDuplicates(vector<int>& jay){
    int i=0;
    for(int j=1;j<jay.size();j++){
        if(jay[i]!=jay[j]){
            i++;
            jay[i]=  jay[j];
            }
           
        } return i+1;
}

int main() {
    vector<int> jay = {1, 1, 2, 2, 3, 4, 4, 5};
    int newSize = removeDuplicates(jay);
    
    cout << "New size of the array after removing duplicates: " << newSize << endl;
    cout << "Elements in the modified array: ";
    for(int i = 0; i < newSize; i++) {
        cout << jay[i] << " ";
    }
    cout << endl;
    
    return 0;
}