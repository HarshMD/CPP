#include<iostream>

using namespace std;

// Write a program to check whether given value is positive negative or nutral

int main(){
    int num;
    cout << "Enter your choice: ";
    cin >> num;
    if(num > 0 ){
        cout << "Positive value";
    }
    else if(num < 0){
        cout << "Negative Value";
    }
    else if(num == 0){
        cout << "Neutral value";
    }
    else{
        cout<< "Undefined value";
    }

    return 0;
}