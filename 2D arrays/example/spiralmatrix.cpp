#include <iostream>
#include <vector>
using namespace std;

void spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    for (; top <= bottom && left <= right; top++, right--, bottom--, left++) {
        // Top row (left to right)
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }

        // Right column (top to bottom)
        for (int i = top + 1; i <= bottom; i++) {
            cout << matrix[i][right] << "  ";
        }

        // Bottom row (right to left)
        if (top < bottom) { // Ensure we're not re-visiting
            for (int i = right - 1; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
        }

        // Left column (bottom to top)
        if (left < right) { // Ensure we're not re-visiting
            for (int i = bottom - 1; i > top; i--) {
                cout << matrix[i][left] << " ";
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    spiralOrder(matrix); // Directly print the result

    return 0;
}
