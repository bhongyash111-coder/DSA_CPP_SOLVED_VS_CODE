#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to perform bubble sort on an array
void bubblesort(int arr[], int n) { // Define a function named bubblesort taking an integer array and its size n
    for (int i = 0; i < n - 1; i++) { // Outer loop runs from 0 to n-2, representing the number of passes
        for (int j = 0; j < n - i - 1; j++) { // Inner loop runs from 0 to n-i-2, comparing adjacent elements
            if (arr[j] > arr[j + 1]) { // Check if the current element is greater than the next element
                swap(arr[j], arr[j + 1]); // Swap the elements if they are in the wrong order
            } // End of if statement
        } // End of inner loop
    } // End of outer loop
} // End of bubblesort function

// Main function where program execution begins
int main() { // Define the main function
    int arr[5] = {5, 4, 3, 2, 1}; // Declare and initialize an integer array of size 5 with values 5, 4, 3, 2, 1
    bubblesort(arr, 5); // Call the bubblesort function to sort the array
    for (int i = 0; i < 5; i++) { // Loop from 0 to 4 to iterate through the sorted array
        cout << arr[i] << " "; // Print the current element followed by a space
    } // End of for loop
    cout << endl; // Print a newline character for better output formatting
    return 0; // Return 0 to indicate successful execution
} // End of main function