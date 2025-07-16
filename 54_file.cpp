#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // ofstream ofile("HelloBro.txt", std::ios::app);

    // ofile<<"I am in 4th year"<<endl;

    // if(ofile){
    //     cout<<"Successfully inserted";
    // }
    // ofile.close();


    string myText;

    ifstream MyReadFile("HelloBro.txt");

    while (getline (MyReadFile, myText)){
        cout<<myText;
    }

    MyReadFile.close();


    return 0;
}