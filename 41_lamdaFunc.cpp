#include<iostream>
#include<functional>

using namespace std;

int main(){
    auto message = [](){
        cout << "Hello World"<<endl;
    };

    auto add = [](int a, int b){
        cout << a+b;
    };

    for(int i=1; i<=3; i++){
        auto show = [i](){
            cout<<"Number: "<<i<<endl;
        };
        show();
    }

    // void newtakefunc(function<void()> func){
    //     func();
    // }


    message();
    add(3, 4);
    // newtakefunc(message);
    

    return 0;
}