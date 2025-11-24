#include<iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    
    Node(int val){
        key = val;
        left = right = nullptr;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << root->key << endl;
    cout << root->left->key << endl;

    return 0;
}