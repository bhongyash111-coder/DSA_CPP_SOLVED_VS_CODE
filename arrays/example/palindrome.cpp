#include<iostream>
using namespace std;

int main() {
    int x = 121;
    long rev = 0;
    int digit;
    int temp = x;
    while (x != 0) {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    return (rev == temp) ? 0 : 1;
}

// The code checks if the number is a palindrome by reversing it and comparing with the original number.