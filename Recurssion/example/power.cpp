// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     return a*power(a,b-1);
// }
// int main(){
//     int a,b;
//     cout<<"enter the value of a and b";
//     cin>>a>>b;
//     cout<<power(a,b)<<endl;
// }

class Solution {
    public:
        double myPow(double x, int n) {
            // Handle negative exponents
            long long N = n; // Use long long to avoid overflow for INT_MIN
            if (N < 0) {
                x = 1 / x;
                N = -N;
            }
    
            // Base case
            if (N == 0) {
                return 1.0;
            }
    
            // Recursive case
            double half = myPow(x, N / 2); // Compute x^(N/2)
            if (N % 2 == 0) {
                return half * half; // If N is even: x^N = (x^(N/2))^2
            } else {
                return x * half * half; // If N is odd: x^N = x * (x^((N-1)/2))^2
            }
        }
    };