#include<iostream>

using namespace std;

int main(){
    char alpha;
    cout << "Enter your choice: ";
    cin>> alpha;
    if(alpha == 'a')
        cout << "Option A";
    else if(alpha == 'b'){
        cout << "Option B";
    }
    else if(alpha == 'c'){
        cout << "Option B";
    }
    else{
        cout<< "Invalid Choice";
    }

    return 0;
}