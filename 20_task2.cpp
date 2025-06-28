#include<iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int p1age, p2age;
    string p1gender, p2gender;
    string p1fullname,p2fullname,entry_type;

    cout << "Enter your name: ";
    getline(cin, p1fullname);
    cout << "Enter your age: ";
    cin >> p1age;
    cout << "Enter your gender(male/female): ";
    cin >> p1gender;
    std::transform(p1gender.begin(), p1gender.end(), p1gender.begin(), ::tolower);
    cout << "Enter your relationship status(single/couple/squad): ";
    cin >> entry_type;

    if(p1age >= 18 && p1age <= 40){    
        if(entry_type == "single"){
            if(p1gender == "male"){
                cout << "You have to pay 5000";
            }
            else if(p1gender == "female"){
                cout << "You have to pay 2500 each";
            }
            else{
                cout << "Not allowed";
            }
        }
        else if(entry_type == "couple"){
            cout << "Enter your Partners detail\n";
            cout << "Enter your partners name: ";
            cin.ignore();
            getline(cin, p2fullname);
            cout << "Enter your age: ";
            cin >> p2age;
            cout << "Enter your gender(m/f): ";
            cin >> p1gender;
            std::transform(p2gender.begin(), p2gender.end(), p2gender.begin(), ::tolower);
            if(p2age >= 18 && p2age <= 40){
                if(p1gender != p2gender){
                    cout<< "Welcome to the Club\n";
                    cout << "You Both have to pay 2500 each";
                }
                else{
                    cout<< "Not Welcomed in the Club\n";
                }
            }
            else{
                cout << "Sorry you don't qualify the age limit";
            }
            
        }
        else if(entry_type == "squad"){
            int members,t1age,t2age,t3age;
            cout << "Enter your Squad detail\n";
            cout << "Enter your squad name: ";
            cin.ignore();
            getline(cin, p2fullname);
            cout << "Enter total number of members in your squad: ";
            cin >> members;
            cout << "Enter member 1 age: ";
            cin >> t1age;
            cout << "Enter member 2 age: ";
            cin >> t2age;
            cout << "Enter member 3 age: ";
            cin >> t3age;
            if(t1age >= 18 && t2age >= 18 && t3age >= 18){
                if(members<=4){
                    cout<< "Welcome to the club";
                }
                else{
                    cout << "Sorry only 4 people allowed";
                }
            }
            else{
                cout << "Sorry you don't qualify the age limit";
            }
        }
    }
    else{
        cout << "Sorry you don't qualify the age limit";
    }
     return 0;
}
    

/*
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string p1fullname, p2fullname, entry_type,p1gender, p2gender;
    int p1age, p2age;
    cout<<"Enter your name: ";
    getline(cin,p1fullname);
    cout<<"\nEnter your age: ";
    cin>>p1age;
    if (p1age>=18){
        cout<<"\nYou are allowed to enter!";
        cout<<"\nYour gender: ";
        cin>>p1gender;
        std::transform(p1gender.begin(), p1gender.end(), p1gender.begin(), ::tolower);
        cout<<"\nYour entry type: ";
        cin>>entry_type;
        std::transform(entry_type.begin(), entry_type.end(), entry_type.begin(), ::tolower);
        if(entry_type == "solo"){
            if(p1gender == "male"){
                cout<<"\nPay 5000/-";
            }
            else if(p1gender == "female"){
                cout<<"\nPay 2500/-";
            }
            else{
                cout<<"\nNot allowed";
            }
        }
        else if(entry_type == "duo"){
            cout<<"Enter your partners details:"<<endl;
            cout<<"Enter partner's name: ";
            getline(cin,p2fullname);
            cout<<"\nEnter partner's age: ";
            cin>>p2age;
            if(p2age>=18){
                cout<<"\nYour partner's gender: ";
                cin>>p2gender;
                std::transform(p2gender.begin(), p2gender.end(), p2gender.begin(), ::tolower);
                if(p1gender != p2gender){
                    cout<<"Welcome to club"<<endl;
                }
                else{
                    cout<<"Not Welcome to club"<<endl;
                }
                
            }
            else{
                cout<<"Not allowed!"<<endl;
            }
        }
    }else{
        cout<<"\nMummy ko bolo complan pilaye";
    }

    return 0;
}
*/