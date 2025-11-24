#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class list{
    node* head;
    node* tail;
    public:
    list(){
        head = NULL;
        tail = NULL;
    }
   int push_front(int val){
    node* n =new node(val);
    if(head==NULL){
        head=n;
        tail=n;
   }
   else{
    n->next=head;
    head=n;
   }
}
void display(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void insert(int val,int pos){
    node* n = new node(val);
    if(pos==0){
        n->next=head;
        head=n;
    }
    else{
        node* temp = head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }
}
};
int main(){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    l.push_front(7);
    l.display();
    l.insert(8,3);
    cout<<endl;
    l.display();
}