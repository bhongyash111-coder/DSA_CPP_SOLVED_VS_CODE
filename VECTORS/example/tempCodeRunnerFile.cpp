#include<iostream>
#include<vector>

using namespace std;
bool checkprefixsuffix(vector<int>v){
    int totalsum=0;
    int prefixsum=0;
    for(int i=0;i<v.size();i++){
        totalsum+=v[i];

    }
    for(int i=0;i<v.size();i++){

    prefixsum+=v[i];
    int index =i;
    int suffixsum =totalsum - prefixsum;
    if(suffixsum==prefixsum){
        cout<<index;
        return true;
    }

} return false;
}
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the array element"<<endl;
    for(int i=0;i<n;i++){

    cin>>v[i];}
    checkprefixsuffix(v);

}

