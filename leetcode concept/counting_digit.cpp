#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {12, 34, 56, 7899, 90};

    for(int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        int digit = 0;

        while(n > 0) {
            n = n / 10;
            digit++;
        }

        nums[i] = digit;
    }

    // Print updated vector
    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}

