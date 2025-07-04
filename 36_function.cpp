#include<iostream>

using namespace std;

// 1. no parameter, no return type
void sum(){
    int a=20, b=50, c;
    c = a + b;
    cout << c <<endl;
}

// 2. Parameter no return type
void sub(int a, int b){
    int c;
    c = a - b;
    cout << c <<endl;
}

// 3. No parameter, return type
int mul(){
    int a = 10, b = 43,c;
    c = a * b;
    return c;
}

// 4. parameter, return type
float div(float a, float b){
    float c = a/b;
    return c;
}


int main(){ 
    int prod,dif;

	sum(); // function call
	sub(75,63);

    prod = mul();
    cout<<prod/2<<endl;

    dif = div((float)prod, (float)3);
    cout<<dif<<endl;


    return 0;
}