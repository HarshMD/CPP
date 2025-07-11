// Object array 
#include<iostream>
#include<string>

using namespace std;

class Phone{
    private:
    int cost;
    public:
    string name;
    void setValue(int c, string n){
        cost = c;
        name = n;
    }
    int getCost(){
        return cost;
    }
    string getName(){
        return name;
    }
};

int main(){
    Phone p1;
    // p1.name = "Iphone";
    p1.setValue(7000, "Iphone");
    cout<<p1.getName()<<endl;
    cout<<p1.getCost();

    return 0;
}