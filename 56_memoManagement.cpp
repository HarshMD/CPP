#include<iostream>

using namespace std;

int main(){
    int numGuests;
    cout<< "How many Guests?"<<endl;
    cin >> numGuests;

    if (numGuests <= 0){
        cout << "Number of guests must be at least 1.\n";
        return 0;
    }

    string* guests = new string[numGuests];

    for (int i = 0; i < numGuests; i++) {
    cout << "Enter name for guest " << (i + 1) << ": ";
    cin >> guests[i];
    }

    cout << "\nGuests checked in:\n";
    for (int i = 0; i < numGuests; i++) {
        cout << guests[i] << "\n";
    }

    delete[] guests;
    
    return 0;
}