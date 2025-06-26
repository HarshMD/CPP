#include<iostream>

using namespace std;

int main(){
    const float PI = 3.14f; //Constant values are mostly written in capital
    //pi = 3.14f;  // Will give error 
    // in const assign value where it is initialised 
	cout << "PI = "<<PI<<endl;

    // pi = 3.16;  // cant change the value
	// cout << "PI = "<<pi<<endl;

    return 0;
}