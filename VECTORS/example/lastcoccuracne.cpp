#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(6);  // Initialize vector with size 6

    cout << "Enter 6 numbers: ";
    // Input 6 elements
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    cout << "Enter the x: ";
    cout << "Enter the number to find: ";
    int x;
    cin >> x;

    int occurrence = -1;  // Variable to store the index of occurrence, initialized to -1
    int occurrence = -1;  // Variable to store the index of the last occurrence, initialized to -1

    // Search for the first occurrence of x in the vector
    // Search for the last occurrence of x in the vector
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            occurrence = i;  // Update occurrence with the index
            break;  // Exit the loop once we find the first occurrence
            occurrence = i;  // Keep updating the index to find the last one
        }
    }

    cout << occurrence << endl;  // Output the index of occurrence, or -1 if not found
    if (occurrence != -1) {
        cout << "The last occurrence of " << x << " is at index: " << occurrence << endl;
    } else {
        cout << x << " was not found in the vector." << endl;
    }
    return 0;
}
