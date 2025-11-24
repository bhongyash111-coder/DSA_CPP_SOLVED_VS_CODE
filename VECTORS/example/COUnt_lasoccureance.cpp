#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(6);
    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int occurrence = 0;  // Initialize count to 0

    for (int ele : v) {
        if (ele == x) {
            occurrence++;  // Increment occurrence count
        }
    }

    cout << "The number " << x << " appears " << occurrence << " times." << endl;  // Output the result
}
