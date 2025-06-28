#include<iostream>

using namespace std;

int main(){
    int month;
    cout << "Enter a month: ";
    cin >> month;
	
    switch(month){
        
        case 2:            
        case 3:
        case 4:            
        case 5:
            cout<< "Summer";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            cout<< "Rainy";
            break;
        case 10:
        case 11:
        case 12:
        case 1:
            cout<< "Winter";
            break;
        default:
            cout << "Incorrect Month entered";
    }
    return 0;
}