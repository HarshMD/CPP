#include<iostream>

using namespace std;

int main(){
    int n = 11, counter = 0;

    for(int i = 2; i <= n-1; i++){
        if(n%i==0){
            counter++;
            break;
        }
    }
    if(counter != 0){
            cout<<"It is not a prime number";
        }
        else{
            cout<<"It is a prime number";
        }
    return 0;
}