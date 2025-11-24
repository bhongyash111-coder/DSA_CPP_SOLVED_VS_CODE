#include<iostream>
using namespace std;
int main(){int n; cin>>n;
    for (int i = 0; i < n; i++) {
        // Step 2.1: Spaces - Number of columns: n - i - 1, e.g. if n = 4, step 1: 3, step 2: 2, step 3: 1, step 4: 0
        for (int j = 0; j < n-i; j++) {
            // Step 3.1: Printing spaces n-i-1 times
            cout<<"  ";
        }

        // Step 2.2: Stars - Number of columns: 2 * i + 1, e.g. step 1: 1, step 2: 3, step 3: 5, step 4: 7
        for (int j = 0; j < 2*i+1 ; j++) {
            // Step 3.1: Printing stars 2*i+1 times
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
    }
    }
