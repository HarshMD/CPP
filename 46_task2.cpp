#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string name;
    string brand;
    float price;
    int stock;

public:
    void inputDetails() {
        cout << "Enter phone name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter brand: ";
        getline(cin, brand);

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter stock quantity: ";
        cin >> stock;
    }

    void displayDetails() const {
        cout << "\nPhone Name : " << name;
        cout << "\nBrand      : " << brand;
        cout << "\nPrice      : " << price;
        cout << "\nStock      : " << stock << "\n";
    }

    string getName() const {
        return name;
    }

    int getStock() const {
        return stock;
    }

    void reduceStock(int quantity) {
        stock -= quantity;
    }
};

class Shop {
private:
    Phone phones[100];
    int count;

public:
    Shop() {
        count = 0;
    }

    void addPhone() {
        if (count < 100) {
            cout << "\nAdding Phone #" << count + 1 << endl;
            phones[count].inputDetails();
            count++;
            cout << "Phone added successfully!\n";
        } else {
            cout << "Inventory full!\n";
        }
    }

    void displayAllPhones() {
        if (count == 0) {
            cout << "No phones in inventory.\n";
            return;
        }

        cout << "\n----- Phone Inventory -----\n";
        for (int i = 0; i < count; i++) {
            cout << "\nPhone " << i + 1 << ":";
            phones[i].displayDetails();
        }
    }

    void searchPhone() {
        string searchName;
        cout << "Enter phone name to search: ";
        cin.ignore();
        getline(cin, searchName);

        bool found = false;
        for (int i = 0; i < count; i++) {
            if (phones[i].getName() == searchName) {
                cout << "\nPhone Found:\n";
                phones[i].displayDetails();
                found = true;
                break;
            }
        }

        if (found == false) {
            cout << "Phone not found in inventory.\n";
        }
    }

    void buyPhone() {
        string buyName;
        int qty;
        cout << "Enter phone name to order: ";
        cin.ignore();
        getline(cin, buyName);

        for (int i = 0; i < count; i++) {
            if (phones[i].getName() == buyName) {
                cout << "Enter quantity to buy: ";
                cin >> qty;

                if (qty <= phones[i].getStock()) {
                    phones[i].reduceStock(qty);
                    cout << "\nOrder placed successfully!";
                    cout << "\nPhone will be delivered in 10 minutes (Quick Commerce Style)\n";
                } else {
                    cout << "Only " << phones[i].getStock() << " units available.\n";
                }
                return;
            }
        }
        cout << "Phone not found in inventory.\n";
    }
};


int main() {
    Shop myShop;
    int choice;

    do {
        cout << "\n==== Phone Shop Quick Commerce Menu ====\n";
        cout << "1. Add Phone to Inventory\n";
        cout << "2. Display All Phones\n";
        cout << "3. Search Phone\n";
        cout << "4. Buy a Phone (Quick Order)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: myShop.addPhone(); break;
            case 2: myShop.displayAllPhones(); break;
            case 3: myShop.searchPhone(); break;
            case 4: myShop.buyPhone(); break;
            case 5: cout << "Exiting... Thanks for using our app!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

