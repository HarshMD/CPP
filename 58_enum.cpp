#include<iostream>

using namespace std;

enum day {
    Mon = 1,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Sun
};

int main(){
    enum day val = Thu;

    switch(val){
        case 1:
            cout<< "Monday ";
            cout<< val;
            break;
        case 2:
            cout<< "Tuesday ";
            cout<< val;
            break;
        case 3:
            cout<< "Wednesday ";
            cout<< val;
            break;
        case 4:
            cout<< "Thursday ";
            cout<< val;
            break;
        case 5:
            cout<< "Friday ";
            cout<< val;
            break;
        case 6:
            cout<< "Saturday ";
            cout<< val;
            break;
        case 7:
            cout<< "Sunday ";
            cout<< val;
            break;
    }

    return 0;
}