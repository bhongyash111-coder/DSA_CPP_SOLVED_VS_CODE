#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1, 3, 4, 6, 7, 9};
    int arr2[] = {2, 5, 8, 10};
    
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int result[m + n];  // Size of result array
    int i = 0, j = 0, k = 0;

    // Merging arrays
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in arr1
    while (i < n) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // If there are remaining elements in arr2
    while (j < m) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    // Printing merged result
    for (int s = 0; s < k; s++) {
        cout << result[s] << " ";
    }

    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    // Input arrays
    int arr1[] = {1, 2, 3};
    int arr2[] = {7, 8, 9};
    int m = 3, n = 3; // Sizes of the arrays

    int result[m + n]; // Array to store merged result
    int i = 0, j = 0; // Pointers for arr1 and arr2

    // Merge the arrays
    for (int k = 0; k < m + n; k++) {
        if (i < m && (j >= n || arr1[i] < arr2[j])) {
            result[k] = arr1[i]; // Take element from arr1
            i++;
        } else {
            result[k] = arr2[j]; // Take element from arr2
            j++;
        }
    }

    // Print the merged array
    cout << "Merged Array: ";
    for (int x = 0; x < m + n; x++) {
        cout << result[x] << " ";
    }

    return 0;
}
*/