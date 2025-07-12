#include<iostream>
#include<string>
using namespace std;
class Phone{
    private:
    int cost;
    string name;
    public:
    
    void setValues(int c,string n){
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
class SmartPhone:public Phone{
    public:
    int ram;
    int refreshRateinHZ;
};

int main(){
    SmartPhone s1;
    s1.setValues(70000,"iPhone");
    s1.ram = 16;
    s1.refreshRateinHZ = 120;
    cout<<s1.getCost()<<endl;
    cout<<s1.getName()<<endl;
    cout<<s1.ram<<endl;
    cout<<s1.refreshRateinHZ<<endl;
    return 0;
}