#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Default constructor"<<endl;
    }
    A(int a)
    {
        cout<<a<< " "<<"Parameterized constructor"<<endl;
    }
};
int main()
{
    A obj1;
    A obj2(10);
    return 0;
}