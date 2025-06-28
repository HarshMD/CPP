#include<iostream>

using namespace std;

int main(){

    /*
    for(initialisation; condition; update){
        code to be executed
    }
    */
    
    // for(int i = 150; i <= 350; i++){
    //     cout << "i = " << i << endl;
    // }
	// write a program to print numbers from 150 to 350

    
    // for(int i = 444; i >= 44; i--){
    //     cout << "i = " << i << endl;
    // }

    for(int i = 555; i >= 155; i-=5){
        cout << "i = " << i << endl;
    }

    for(int i = 1; i <= 100; i++){
        for(int j=1; j<=100; j++){
            int p;
            p = i%j;
            if(p!= 0){
                cout << "Prime numbers are: " << p << endl;
            }
        }
        
    }

    return 0;
}