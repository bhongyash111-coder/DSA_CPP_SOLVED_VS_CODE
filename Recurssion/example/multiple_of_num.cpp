#include <iostream>
using namespace std;

void f(int n, int k) {
    if (k == 0) { // Base case: when k reaches 0, stop recursion
        return;
    }
    f(n, k - 1); // Recursive call first (ensures ascending order)
    cout << (n * k) << " "; // Print kth multiple of n
}

int main() {
    int n, k;
    cout << "Enter the value of n and k: ";
    cin >> n >> k;
    f(n, k);
    return 0;
}
