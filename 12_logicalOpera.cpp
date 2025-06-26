#include<iostream>

using namespace std;

int main(){
    int a = 10; 
    int b = 20; 
	cout << (a>b && b>10) <<endl;
	cout << (a>b || b>10) <<endl;
	cout << !(a>b && b>10) <<endl;

    return 0;
}