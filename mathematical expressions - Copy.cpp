#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to check if a character is an operator (+, -, *, /)
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to perform arithmetic operations
int applyOperation(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;  // Assuming b is not zero
    }
    return 0;
}

// Function to evaluate expression
int evaluateExpression(string expression) {
    stack<int> values;
    stack<char> ops;

    for (size_t i = 0; i < expression.length(); ++i) {
        // Skip whitespace
        if (expression[i] == ' ')
            continue;

        // If current character is opening parenthesis, push to ops stack
        else if (expression[i] == '(') {
            ops.push(expression[i]);
        }

        // If current character is a number, extract the full number and push to values stack
        else if (isdigit(expression[i])) {
            int num = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            values.push(num);
            i--; // Decrement i to correct for loop increment
        }

        // If current character is a closing parenthesis
        else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOperation(a, b, op));
            }
            ops.pop(); // Remove '(' from ops stack
        }

        // If current character is an operator
        else if (isOperator(expression[i])) {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i])) {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOperation(a, b, op));
            }
            ops.push(expression[i]);
        }
    }

    // Process remaining operators in stack
    while (!ops.empty()) {
        int b = values.top();
        values.pop();
        int a = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOperation(a, b, op));
    }

    // Top of values stack contains the result
    return values.top();
}

int main() {
    string expression;

    cout << "Enter a mathematical expression (using +, -, *, /, and parentheses): ";
    getline(cin, expression);

    int result = evaluateExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}
