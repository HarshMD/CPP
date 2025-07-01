#include<iostream>

using namespace std;

int main(){
    int v = 3; 
	
    for(int i=1; i<=10; i++){
        if(i == v){
            continue;
        }
        cout<<"i="<<i<<endl;
    }

    return 0;
}