#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cout << "\n--- Calculator ---\n";
        cout << "1. Add(+)\n";
        cout << "2. Subtract(-)\n";
        cout << "3. Multiplication(*)\n";
        cout << "4. Division(/)\n";
        cout << "5. Exit\n";
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter choice: ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> b;
        

   
    auto add = [](float x, float y) { return x + y; };
    auto subtract = [](float x, float y) { return x - y; };
    auto multiply = [](float x, float y) { return x * y; };
    auto divide = [](float x, float y) {
        if (y == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0.0f;
        }
        return x / y;
    };

    float result;

    
    switch (op) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = subtract(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            result = divide(a, b);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}