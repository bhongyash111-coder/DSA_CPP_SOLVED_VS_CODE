#include<iostream>
using namespace std;    
class car{
    public:
        int speed;
        int price;
        char name[20];
};
int main(){
    
    car c1;
    c1.speed = 100;
    c1.price = 200000;
    cout<<c1.speed<<endl;
    cout<<c1.name<<endl;
    cout<<c1.price<<endl;
    return 0;
}