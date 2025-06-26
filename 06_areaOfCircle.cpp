#include<iostream>

using namespace std;

int main(){
    int radius;
    float area;
    const float pi = 3.14f;

    cout << "Enter the radius: ";
    cin >>  radius;
    cout << "\nThe area of the circle is: "<<pi*radius*radius;

    return 0;
}