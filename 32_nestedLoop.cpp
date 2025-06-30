#include<iostream>

using namespace std;

int main(){
    int x, y; 
	
    // for(x=1; x<=3; x++){
    //     for(y=3; y>=x; y--){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }

    cout<<"------------------------"<< endl;

    int a, b; 
    for(a=1; a<=3; a++){
        for(b=1; b<=3; b++){
            cout<<"* ";
        }
        cout << endl;
    }

    return 0;
}