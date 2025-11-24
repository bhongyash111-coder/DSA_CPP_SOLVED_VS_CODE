#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(const string& s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(') {
            stk.push(c);
        } else if (c == ')') {
            if (stk.empty() || stk.top() != '(') {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}

int main() {
    string expr = "(a + b) * (c - d)";
    if (isValidParenthesis(expr)) {
        cout << "Valid parentheses" << endl;
    } else {
        cout << "Invalid parentheses" << endl;
    }
    return 0;
}
