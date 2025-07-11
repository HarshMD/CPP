#include<iostream>

using namespace std;

class cat{
    public:
    string catname;
    int age;
    string color;
    cat(){
        catname = "Bella";
        age = 2;
        color = "Snow white";
    }
    cat(string cn, int a, string c){
        catname = cn;
        age = a;
        color = c;
    }
    cat(cat &c){
        catname = c.catname;
        age = c.age;
        color = c.color;
    }
    ~cat(){
        cout<<"Bye "<<catname<<endl;
    }
    void makesound(){
        cout<<"Meow!"<<endl;
    }
    void intro(){
        cout<<"Hello this is "<<catname<<" And she is "<<age<<" years old. And she is "<<color<<" fur baby."<<endl;
    }
};

int main(){
    
    cat c1;
    c1.makesound();
    // cout<<"Hi "<<c1.catname;
    c1.intro();

    cat c2("Berry", 4, "Grey");
    c2.intro();

    cat c3(c1);
    c3.intro();

    return 0;
}