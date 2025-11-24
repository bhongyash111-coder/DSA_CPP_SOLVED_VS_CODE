#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void count_sort(int arr[], int n) {
    int freq[100000] = {0};
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }

    int j = 0;
    for(int i = min_val; i <= max_val; i++) {
        while(freq[i] > 0) {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    } 
}

int main() {
    vector<int> arr = {2, 3, 4, 2, 4, 5, 2, 4, 9, 6, 7, 8, 9, 4};
    int n = arr.size();
    int arr_c[n];

    for(int i = 0; i < n; i++) {
        arr_c[i] = arr[i];
    }

    count_sort(arr_c, n);

    for(int i = 0; i < n; i++) {
        cout << arr_c[i] << " ";
    }
    cout << endl;

    return 0;
}
