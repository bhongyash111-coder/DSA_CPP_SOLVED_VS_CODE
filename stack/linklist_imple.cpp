#include<iostream>
#include<list>
using namespace std;    
class stack{
    list<int>LL;
public:
    void push(int x){
        LL.push_front(x);
    }
    void pop(){
        LL.pop_front();
    }
    int top(){
        return LL.front();
    }
    bool empty(){
        return LL.empty();
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}