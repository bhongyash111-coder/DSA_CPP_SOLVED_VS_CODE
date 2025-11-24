#include<iostream>
using namespace std;

class cricketer{
    public:
    string name;
    int age;
    int matches;
    int runs;
    int wickets;
    int best_performance;
    int total_performance;
    cricketer(string name,int age,int matches,int runs,int wickets,int best_performance,int total_performance){
        this->name=name;
        this->age=age;
        this->matches=matches;
        this->runs=runs;
        this->wickets=wickets;
        this->best_performance=best_performance;
        this->total_performance=total_performance;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Matches: "<<matches<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Wickets: "<<wickets<<endl;
    }
    
};

int main(){
    cricketer c1("Virat Kohli",32,100,10000,100,100,1000);
    cricketer* c2=new cricketer("Rohit",30,100,10000,100,100,1000);
    c1.display();
    c2->display();
    return 0;
}


