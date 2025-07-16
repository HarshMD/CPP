#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
    string brand;
    string model;
    float price;

    Phone(string brand, string model, int price){
        this->brand = brand;
        this->model = model;
        this->price = price;
    }

    void display() {
        cout << "\nBrand : " << brand;
        cout << "\nModel : " << model;
        cout << "\nPrice : " << price;
    }
};

int main() {
    Phone p1("iphone", "16 ProMax", 150000);
    p1.display();

    return 0;
}