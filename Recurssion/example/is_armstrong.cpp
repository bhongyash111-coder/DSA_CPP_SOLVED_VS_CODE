#include<iostream>
using namespace std; // 153 = 1*1*1 + 5*5*5 + 3*3*3
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}

int f(int n, int d) {
    if(n==0){
        return 0;
    }
    return pow(n%10,d)+f(n/10,d);
}
int main() {    
    int n,d;
    cout<<"enter the number and digit"<<endl;
  
    cin>>n>>d;
   
    if(f(n,d)==n){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;    
    }
}