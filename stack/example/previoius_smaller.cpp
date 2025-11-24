#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  
    vector<int> arr(n);
    cout << "Enter " << n << " elements: "; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    vector<int> result;

    for(int i = 0; i < n; i++) {
        while(!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if(s.empty()) {
            result.push_back(-1); // No previous smaller element
        } else {
            result.push_back(s.top());
        }
        s.push(arr[i]);
    }

    cout << "Previous smaller elements: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}





















// //brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
// //     cout << "Enter a number: ";
// //     cin >> n;  
// //     vector<int> arr(n);
// //     cout << "Enter " << n << " elements: "; 
// //     for(int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }
// //     int prev = arr[0];
// //     cout << "Previous smaller elements: ";
// //     for(int i = 1; i < n; i++) {
// //         if(arr[i] < prev) {
// //             cout << arr[i] << " ";
// //         }
// //         prev = arr[i];
// //     }
// //     return 0;
// // }