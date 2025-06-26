#include<iostream>

using namespace std;

int main(){
    int a = 10; 
    int b = 84; 
    // BitWise
	cout << (a & b) <<endl; // AND
	cout << (a | b) <<endl; // OR
	cout << (a ^ b) <<endl; // XOR

    cout << (a>>1) <<endl; // Right shift halfs the value (Right shift by 1)
    cout << (a>>2) <<endl; // Right shift halfs the value (Right shift by 2)

    cout << (a<<1) <<endl; // Left shift Doubles the value (Left shift by 1)
    return 0;
}