#include<iostream>  
using namespace std;
class Car{
    public:
    string name;
    int speed;
    int price;
    Car(string name, int speed, int price){
     this->name =name;
     this->speed=speed;
     this->price =price;
     }
};
int main(){
    Car c1("yash", 100, 200000);
    cout<<c1.name<<endl;
    cout<<c1.speed<<endl;        
    cout<<c1.price<<endl;
    cout<<endl;
}
    
