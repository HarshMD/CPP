#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;

    size_t dotPos = input.find('.');

    if (dotPos == string::npos) {
        cout << "The number is rational (an integer)." << endl;
    } else {
        string decimalPart = input.substr(dotPos + 1);

        if (decimalPart.length() > 15) {
            cout << "The number is likely irrational." << endl;
        } 
        else {
            cout << "The number is rational." << endl;
        }
    }

    return 0;
}
