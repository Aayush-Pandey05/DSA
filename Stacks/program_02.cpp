#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

int evaluatePostfix(string expression) {
    stack<int> s;

    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0');  // Convert char digit to int
        } else {
            int val2 = s.top();
            s.pop();
            int val1 = s.top();
            s.pop();

            switch (ch) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }
    return s.top();  // Final result
}

int main() {
    string expression = "53+62/*";  // Example: (5 + 3) * (6 / 2) = 16
    cout << "Result: " << evaluatePostfix(expression) << endl;
    return 0;
}
