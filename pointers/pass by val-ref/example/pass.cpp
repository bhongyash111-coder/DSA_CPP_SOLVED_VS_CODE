#include<iostream>
using namespace std;

void proof() {
    int p = 6;
    int &q = p;
    p++;
    cout << p << " " << q << endl;
    cout << &p << "  " << &q << endl;  // Addresses will be the same
}

int main() {
    int p = 6;
    int q = p;
    
    cout << p << " " << q << endl;
    cout << &p << " " << &q << endl;   // Addresses will be different
    proof();
}
