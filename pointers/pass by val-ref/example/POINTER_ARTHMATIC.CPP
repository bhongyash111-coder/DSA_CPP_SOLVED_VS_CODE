#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    for(int i=0; i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int* PTR = arr; // Pointer pointing to the first element (arr[0])

    // 1. PTR++
    cout << "PTR++: " << *PTR << endl;  // Prints value at arr[0] (10)
    PTR++;                              // Now PTR points to arr[1] (20)

    // 2. (*PTR++)
    cout << "(*PTR++): " << *PTR++ << endl; // Prints value at arr[1] (20)
                                            // Then PTR moves to arr[2] (30)

    // 3. *++PTR
    cout << "*++PTR: " << *++PTR << endl;   // PTR moves to arr[3] (40)
                                            // Prints value at arr[3] (40)

    // Reset PTR to point to arr[0]
    PTR = arr;

    // 4. ++*PTR
    ++*PTR;                                // Increments value at arr[0] (10 -> 11)
    cout << "++*PTR: " << *PTR << endl;    // Prints updated value (11)

    return 0;
}
