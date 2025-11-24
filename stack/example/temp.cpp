#include<iostream>
using namespace std;
#include<stack>
int main(){
    int n; 
    cout << "Enter a number: ";
    cin >> n;   
    int table;
   
    for(int i=1;i<=10;i++){
        table=n*i;
        cout<<n<<" * "<<i<<" = "<<table<<endl;
    }
    
}