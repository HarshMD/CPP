#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int val = rand()%100+1;
    bool status = true;
    int num;

    
    while(status){
        cout<<"Guess the number: ";
        cin>> num;
        if(val == num){
            cout<< "You guessed the right number";
            break;
        }
        else if(val > num){
            cout<< "The value is greater than the number entered.";
        }
        else if(val < num){
            cout<< "The value is less than the number entered.";
        }
        else{
            cout<< "You entered a wrong choice";
        }
        
    }
    return 0;
}

