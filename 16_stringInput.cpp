#include<iostream>

using namespace std;

int main(){
    string firstName, lastName;
    // cout << "Type your first name: ";
    // cin >> firstName;
    // cout << "Type your last name: ";
    // cin >> lastName;
    // cout << "Your name is: " << firstName + " " + lastName;

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName); // to get full name in single variable using space
    cout << "Your name is: " << fullName;

    return 0;
}