#include<iostream>

using namespace std;

int main(){
    int n, x, y, i, j, a, b, c, d, e, f, p, q; 

    cout<<"Enter the number of rows/stars: "<<endl;
    cin >> n;
	
    for(x=1; x<=n; x++){
        for(y=n; y>=x; y--){
            cout<<"* ";
        }
        cout << endl;
    }
    cout<<"------------------------"<< endl;

    for(a=1; a<=n; a++){
        for(b=1; b<=a; b++){
            cout<<"* ";
        }
        cout << endl;
    }
    cout<<"------------------------"<< endl;

    for(c=1; c<=n; c++){
        for(d=1; d<=n-c; d++){
            cout<<" ";
        }
        for(d=1; d<=c; d++){
            cout<<"* ";
        }
        cout << endl;
    }
    cout<<"------------------------"<< endl;

    for(e=1; e<=n; e++){
        for(f=1; f<=n-e; f++){
            cout<<" ";
        }
        for(f=1; f<=e; f++){
            cout<<"*";
        }
        cout << endl;
    }
 
    cout<<"------------------------"<< endl;

    for(p=1; p<=n; p++){
        for(q=1; q<=p; q++){
            cout<<" ";
        }
        for(q=3; q>=p; q--){
            cout<<"*";
        }
        cout << endl;
    }

    cout<<"------------------------"<< endl;

    
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(j=1; j<=(2*i)-1; j++){
            cout<<"*";
        }
        cout << endl;
    }
    for(i=n-1; i>=1; i--){
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(j=1; j<=(2*i)-1; j++){
            cout<<"*";
        }
        cout << endl;
    }

    
    return 0;
}