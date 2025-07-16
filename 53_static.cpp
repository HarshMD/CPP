#include<iostream>

using namespace std;

class Myclass{
public:
    static int value;
};

int Myclass::value = 10;
int count(){
    static int count = 0;
    count++;
	cout << "Count = "<< count<<endl;
}
int main(){
    count();
    count();
    count();
    count();

    Myclass obj1;
    Myclass obj2;

    cout<<Myclass::value<<endl;
    obj1.value = 20;
    cout<<obj2.value<<endl;
    return 0;
}