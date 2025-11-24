#include<iostream>
using namespace std;

void pri(int n){
    if(n==0) return;
    pri(n-1);
    cout << n << " ";
    
}
int main(){
    int n=5;
    
    pri(n);
    return 0;
}