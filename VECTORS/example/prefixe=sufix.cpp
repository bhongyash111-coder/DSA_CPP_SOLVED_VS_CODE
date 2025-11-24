#include <iostream>
#include <vector>

using namespace std;

bool checkprefixsuffix(vector<int>& v) {
    int totalsum = 0;
    int prefixsum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < v.size(); i++) {
        totalsum += v[i];
    }

    // Iterate through the array to check where prefix equals suffix
    for (int i = 0; i < v.size(); i++) {
        prefixsum += v[i];  // Add the current element to prefix sum
        int suffixsum = totalsum - prefixsum;  // Calculate suffix sum

        // If prefix sum equals suffix sum, return true and print index
        if (prefixsum == suffixsum) {
            cout << "Prefix equals suffix at index: " << i << endl;
            return true;
        }
    }

    // If no such index is found, return false
    return false;
}

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Call the function and check the result
    if (!checkprefixsuffix(v)) {
        cout << "No such index where prefix equals suffix." << endl;
    }

    return 0;
}
