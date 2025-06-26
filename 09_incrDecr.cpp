#include<iostream>

using namespace std;

int main(){
    int a = 47;
    int b = 63;
    int c;
    c = ++a - --b - -a + b++ + --a - --b - ++b + a - a++ + b-- - a;
	cout << c;

    return 0;
}