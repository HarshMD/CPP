// demonstrate class and objects by defining a class name villan with 
// properties: name, dialog and movie they appeared in

#include<iostream>

using namespace std;

class villan{
    public:
    string name, movie, dialog;

    void action(string move){
        cout<<name<<" was good at "<< move <<" in the movie."<<endl;
    }
};

int main(){
    villan v1;
    v1.name = "Mogambo";
    v1.movie = "Mr.India";
    v1.dialog = "Mogambo khush Hua";
    cout << "Villan 1"<<endl;
	cout << "Villan name: "<<v1.name<<endl;
	cout << "Villan movie: "<<v1.movie<<endl;
	cout << "Villan dialog: "<<v1.dialog<<endl;
    v1.action("ruling");

    villan v2;
    v2.name = "Gabbar Singh";
    v2.movie = "Sholay";
    v2.dialog = "Kitne aadmi the?";
    cout << "Villan 2"<<endl;
	cout << "Villan name: "<<v2.name<<endl;
	cout << "Villan movie: "<<v2.movie<<endl;
	cout << "Villan dialog: "<<v2.dialog<<endl;
    v2.action("looting the village");

    villan v3;
    v3.name = "Gabbar Singh";
    v3.movie = "Sholay";
    v3.dialog = "Yeh haath mujhe de de Thakur";
    cout << "Villan 3"<<endl;
	cout << "Villan name: "<<v3.name<<endl;
	cout << "Villan movie: "<<v3.movie<<endl;
	cout << "Villan dialog: "<<v3.dialog<<endl;
    v3.action("looting the village");

    return 0;
}