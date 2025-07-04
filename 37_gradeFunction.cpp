#include<iostream>

using namespace std;


int marks(){
    int i, total = 0, m1, m2, m3, m4, m5;
    
    cout<<"Enter marks 1: "<<endl;
    cin>> m1;
    cout<<"Enter marks 2: "<<endl;
    cin>> m2;
    cout<<"Enter marks 3: "<<endl;
    cin>> m3;
    cout<<"Enter marks 4: "<<endl;
    cin>> m4;
    cout<<"Enter marks 5: "<<endl;
    cin>> m5;
    
    total = m1+m2+m3+m4+m5;

    return total;
}


void percentage(int total){
    int percent;
    percent = total/5;
    cout << "Percentage: " << percent <<endl;
}


void grade(){
    int m1, m2, m3, m4, m5;
    if (m1 >= 90)
        cout << 'A';
    else if (m2 >= 80)
        cout << 'B';
    else if (m3 >= 70)
        cout << 'C';
    else if (m4 >= 60)
        cout << 'D';
    else if (m5 >= 40)
        cout << 'E';
    else
        cout << 'F';
}

void percentile(){
    int size = 10;
    int marks[size] = {24,53,13,53,73,75,10,86,56,86};  
    int score;      
    int n = 0;
    float div = 0;
    float percentile = 0;

    cout<<"Enter Score:";
    cin>>score;
    
    cout << "Percentile is:";
    for (int i = 0; i < size; i++) {
        if(marks[i]<score){
            n++;
        }
        div = (float) n/size;
        percentile =  div * 100;
    }

    cout<< percentile;
}


int main(){ 
    // int total;
	// total = marks();
	// percentage(total);
    percentile();
    // grade();

    return 0;
}