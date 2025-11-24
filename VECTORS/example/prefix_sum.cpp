#include <iostream>
#include <vector>
using namespace std;
void prefix_sum(vector<int>&v, vector<int>&prefix){
    
    prefix[0]=v[0];
    for(int i =1;i<v.size();i++){
        prefix[i]=v[i-1]+v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<prefix[i]<<" ";
}
}
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>v(n);
    vector<int>prefix(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    prefix_sum(v,prefix);
}

