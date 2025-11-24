#include <iostream>
#include <vector>
using namespace std;

// Function to find the row with the maximum number of 1s
int rowWithMaxOnes(const vector<vector<int>>& matrix) {
    int maxOnes = 0;
    int rowIndex = -1;
    
    for (int i = 0; i < matrix.size(); i++) {
        int count = 0; // Count of 1s in the current row
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 1)
                count++;
            else
                break; // Stop counting as the row is sorted
        }
        
        if (count > maxOnes) {
            maxOnes = count;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 0, 0, 1},
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    
    int result = rowWithMaxOnes(matrix);
    cout << "Row with max 1s: " << result << endl;
    return 0;
}
/*int rowWithMaxOnes(const vector<vector<int>>& matrix) {
    int maxOnes = 0;  // Track the maximum number of 1s found
    int rowIndex = -1;  // Track the row index with the maximum 1s
    
    for (int i = 0; i < matrix.size(); i++) { // Loop through each row
        int count = 0;  // Count of 1s in the current row
        for (int j = 0; j < matrix[i].size(); j++) { // Loop through each element in the row
            if (matrix[i][j] == 1) { 
                count++;  // Increment the count for each 1
            } else {
                break;  // Stop counting if we encounter a 0
            }
        }
        
        // Update maxOnes and rowIndex if this row has more 1s
        if (count > maxOnes) {
            maxOnes = count;
            rowIndex = i;
        }
    }
    return rowIndex;  // Return the index of the row with the most 1s
}
*/