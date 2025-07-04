#include <iostream>
using namespace std;

int main() {
    int marks[10];         
    float percentage[10];     
    char grade[10];           

    
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter marks for Student " << i + 1 << " (out of 100):\n";
        int total = 0;
        cin >> marks[i];
        
        if (marks[i] >= 90)
            grade[i] = 'A';
        else if (marks[i] >= 80)
            grade[i] = 'B';
        else if (marks[i] >= 70)
            grade[i] = 'C';
        else if (marks[i] >= 60)
            grade[i] = 'D';
        else if (marks[i] >= 40)
            grade[i] = 'E';
        else
            grade[i] = 'F';
    }

    cout << "\n----- Student Results -----\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " - Percentage: " << marks[i] << "%, Grade: " << grade[i] << " → ";
        
        if (grade[i] == 'A')
            cout << "Excellent!\n";
        else if (grade[i] == 'B')
            cout << "Very Good.\n";
        else if (grade[i] == 'C')
            cout << "Good.\n";
        else if (grade[i] == 'D')
            cout << "Needs Improvement.\n";
        else if (grade[i] == 'E')
            cout << "Poor.\n";
        else
            cout << "Fail.\n";
    }

    return 0;
}