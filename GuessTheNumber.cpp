#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    char playAgain;

    do{
        srand(time(0));
        int val = rand() % 100 + 1;
        int num, attempts = 0;

        cout << "Welcome to Guess the Number Game!"<< endl;
        cout << "Guess a number between 1 to 100."<< endl;

        
        while(true){
            cout<<"Guess the number: ";
            cin>> num;
            attempts++;
            if(val == num){
                cout<< "You guessed the right number in "<< attempts << " attempts.";
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
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        
    }while(playAgain == 'y' || playAgain == 'Y');

    cout<< "Thank you for playing. Good Bye";
    
    return 0;
}

