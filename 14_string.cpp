#include<iostream>
#include<string>

using namespace std;

int main(){
    string firstName = "Harsh";
    string lastName = "Dhanawade";
	string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // To print last character
    cout << firstName[firstName.length()-1];
    cout << lastName[lastName.length()-1];

   

    // concatinate using append
    string app = firstName.append(" " + lastName);
    cout << app;

    // for text length
    string txt = "ADNGIDNEFUNVKNIE NVQ";
    cout << "The length of txt is: "<< txt.length()<<endl;

    
    string greet = "Hello";
    cout<< greet[4];

    return 0;
}

