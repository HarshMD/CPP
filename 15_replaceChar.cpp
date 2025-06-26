#include<iostream>
#include<string>

using namespace std;

int main(){
    string myString = "Hello";
    cout << myString << endl;
    cout << myString.at(0) << endl;
    cout << myString.at(1) << endl;
    cout << myString.at(myString.length() - 1) << endl;

    myString.at(0) = 'J';
    cout << myString << endl;

    string txt = "We are\\ the so \
    called \"Vikings\" from\ 
 the north";

    cout << txt;

    return 0;
}