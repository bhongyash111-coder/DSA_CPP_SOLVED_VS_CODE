#include<iostream>
using namespace std;

class student{
    private:
    int age;
    public:
    int roll_no;
    void display(){
        cout<<age<<endl;
    }
    student(int a){
        age=a;
    }
    void get_age(){
        cout<<age<<endl;
    }
    void set_age(int a){
        age=a;
    }
    

};

int main(){
    student s1;
    s1.roll_no=1;
    s1.display();
    return 0; 

    //s1.age=19; this will give error because age is private
    //cout<<s1.age<<endl;  
    //we can access private members through public member function
    s1.set_age(19);
    s1.display();
}
