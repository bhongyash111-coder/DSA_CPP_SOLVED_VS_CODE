#include <iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
   
     
    cout<<"Enter the no of row and colum for the first array  :";
    cin>>r1>>c1;
    cout<<"Enter the no of row and colum for the second array  :";
    cin>>r2>>c2;
    int a[r1][c1];
    int b[r2][c2];
    int resul[r1][c2]={0};

    if(c1!=r2){
        cout<<"not possible";
        return 0;
    }
    cout<<"Enter the no of elements in in mat"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the no of elements in in mat"<<endl;

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

     for (int i = 0; i < r1; i++) { 
        for (int j = 0; j < c2; j++) {
             for (int k = 0; k < c1; k++) { 
                resul[i][j] += a[i][k] * b[k][j];
                } }}

cout << "Resultant matrix after multiplication:" << endl; 
for (int i = 0; i < r1; i++) { 
    for (int j = 0; j < c2; j++){
         cout << resul[i][j] << " ";
          } 
cout << endl; } return 0;
}