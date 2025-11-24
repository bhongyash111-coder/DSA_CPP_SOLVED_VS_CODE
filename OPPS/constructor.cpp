#include<iostream>
using namespace std;
class Car{
    public:
   string name[50];
   int speed;
   int price;
   Car(string n, int s, int p){
    name[20] =n;
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
    Car c2("ram", 200, 300000);
    Car c3("shyam", 300, 400000);
    display(c1);
    display(c2);
    display(c3);
    return 0;
}