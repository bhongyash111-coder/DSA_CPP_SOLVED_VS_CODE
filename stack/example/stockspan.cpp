#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> calculateStockSpan(const vector<int>& prices) {
    int n = prices.size();
    vector<int> span(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && prices[s.top()] <= prices[i]) {
            s.pop();
        }
        span[i] = s.empty() ? i + 1 : i - s.top();
        s.push(i);
    }
    return span;
}

int main() {
    vector<int> stockPrices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> stockSpan = calculateStockSpan(stockPrices);

    cout << "Stock Prices: ";
    for (int price : stockPrices) {
        cout << price << " ";
    }
    cout << endl;

    cout << "Stock Span: ";
    for (int span : stockSpan) {
        cout << span << " ";
    }
    cout << endl;

    return 0;
}