#include <iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
     
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}
int main(){
    int x = 3;
    fun(x);
    return 0;
}+