#include<iostream>
using namespace std;

class vehicle{
    public:
    int max_speed;
    int num_of_gears;
    int num_of_wheels;

    private:
    int num_of_engines;
    
};
class car: public vehicle{
    public:
    int num_of_doors;
    int num_of_seats;
};

class bike: private vehicle{
    public:
    int num_of_gears;
    int num_of_wheels;
    int num_of_engines;
};

int main(){
    bike b1;
    b1.num_of_engines=1;

cout<<b1.num_of_engines<<endl;
}
