#include<iostream>
using namespace std;

int main(){
    int n=5;
    int fact;
    for(int i =1; i < n;i++){
        int fact = n*(n-i);
    }
    cout<<fact;
}