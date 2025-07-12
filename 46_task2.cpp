#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string name;
    string brand;
    float price;

public:
    void inputDetails() {
        cout << "Enter phone name: ";
        getline(cin, name);

        cout << "Enter brand: ";
        getline(cin, brand);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); // Clear buffer
    }

    void displayDetails() {
        cout << "\nPhone Name : " << name;
        cout << "\nBrand      : " << brand;
        cout << "\nPrice      : " << price << "\n";
    }
};

int main() {
    int n;
    cout << "How many phones do you want to enter? ";
    cin >> n;
    cin.ignore(); // Clear buffer after reading number

    Phone phones[n]; 

    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Phone " << i + 1 << ":\n";
        phones[i].inputDetails();
    }

    
    cout << "\n----- All Phone Details -----\n";
    for (int i = 0; i < n; i++) {
        cout << "\nPhone " << i + 1 << ":";
        phones[i].displayDetails();
    }

    return 0;
}
