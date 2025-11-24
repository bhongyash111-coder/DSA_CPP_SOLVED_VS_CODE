#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void evenFirst(vector<int>& v) {
    int left = 0, right = v.size() - 1;
    while (left < right) {
        if (v[left] % 2 == 1 && v[right] % 2 == 0) {
            swap(v[left++], v[right--]);
        } else if (v[left] % 2 == 0) {
            left++;
        } else {
            right--;
        }
    }
}

int main() {
    vector<int> n = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    evenFirst(n);
    for (int i : n) {
        cout << i << " ";
    }
    return 0;
}