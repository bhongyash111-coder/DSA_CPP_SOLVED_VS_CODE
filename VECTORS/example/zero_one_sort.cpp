#include<iostream>
#include<vector>
using namespace std;

void sortzero_one(vector<int>v){
    int left_ptr = 0, right_ptr=v.size() - 1;
    while(left_ptr < right_ptr){
        if(v[left_ptr] ==1 && v[right_ptr]=0){
            v[left_ptr++] ==  0 ;
            v[right_ptr--]== 1 ;
            }
        if(v[left_ptr]=0){
            left_ptr++;
        }
        if(v[right_ptr]=0){
            right_ptr--;
        }
        
}      
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements 0 and 1"<<endl;
    for(int i=0 ; i<n; i++){
        cin>>v[i]; 
    }
    sortzero_one(v);
    for(int i:v){
        cout<<i<<" ";


    }
    cout<<endl;
}