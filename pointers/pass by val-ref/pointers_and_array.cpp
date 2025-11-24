#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Array initialization
    int *ptr = (arr + 3 );          // Pointer points to arr[3] (value = 4)

    cout << ptr<<endl;                 // Prints the memory address stored in ptr
    *ptr++;                        // Post-increment: ptr moves to arr[4] (value = 5)
    cout << *ptr;                  // Dereferences the new pointer position, printing the value at arr[4]

    return 0;
}
