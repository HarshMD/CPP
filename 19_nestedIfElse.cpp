#include<iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter your choice: ";
    cin >> num;
    if(num > 0 ){
        cout << "Number is positive\n";
        if(num > 5 ){
            cout << "And it is Greater than 5";
        }
        else{
            cout << "But it is not Greater than 5";
        }
    }
    else{
        cout << "Number is negative\n";
        if(num > -5 ){
            cout << "And it is Greater than -5";
        }
        else{
            cout << "But it is not Greater than -5";
        }
    }

    return 0;
}