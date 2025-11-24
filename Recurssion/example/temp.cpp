#include<iostream>
using namespace std;

void sum(int n){
    if(n==0){
        return;
    }
    sum(n-1);
    cout<<n+(n+1)<<" ";
}

int main(){ 
    int n=5;
    sum(n);
    return 0;
}