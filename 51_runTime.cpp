#include<iostream>
using namespace std;

class Base{
public:
    virtual void display(){
        cout<< "Base class Function";
    }
};

class Derived : public Base{
public:
    void display() override{
        cout<< "Derived class Function";
    }
};
int main(){
    Base* basePtr;

    Derived derivedObj;

    basePtr = &derivedObj;
    
    basePtr->display();


    return 0;
}