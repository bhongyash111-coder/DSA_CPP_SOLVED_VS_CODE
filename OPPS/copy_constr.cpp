#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int speed;
    int price;
    Car(string n, int s, int p){
     name =n;
     speed=s;
     price =p;
     }
};
void display(Car c){
    cout<<c.name<<endl;
    cout<<c.speed<<endl;        
    cout<<c.price<<endl;
    cout<<endl;
}    
int main(){
    Car c1("yash", 100, 200000);
    Car c2(c1);
    display(c1);
    display(c2);
    return 0;
}