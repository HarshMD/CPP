#include<iostream>

using namespace std;

int main(){
    int a = 50;
    int b = 49;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = (float)a/b;
    int rem = a % b;
    
	cout << "Addition of a & b is: "<< c <<endl;
	cout << "Subtraction of a & b is: "<< d <<endl;
	cout << "Multiplication of a & b is: "<< e <<endl;
	cout << "Division of a & b is: "<< f <<endl;
	cout << "Remainder of a & b is: "<< rem <<endl;

    return 0;

    
}