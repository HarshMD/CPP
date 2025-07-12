#include<iostream>
using namespace std;

class Sum{
    public: 
        void add(int a, int b){
            cout<<"Integer is: "<<a+b<<endl;
        }
        void add(double a, double b){
            cout<<"Integer is: "<<a+b<<endl;
        }
};

int main(){
    Sum plus;
    plus.add(5,6);
    plus.add(5.3,6.7);
    return 0;
}


