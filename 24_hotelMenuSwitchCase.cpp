#include<iostream>

using namespace std;

int main(){
    int choice, MRP;
    float GST, total;

    cout << "Hotel Menu\n";
    cout << "1. A ---------------  Rs.150/-\n";
    cout << "2. B ---------------  Rs.95/-\n";
    cout << "3. C ---------------  Rs.250/-\n";
    cout << "4. D ---------------  Rs.120/-\n";
    cout << "5. E ---------------  Rs.170/-\n";
    cout << "6. F ---------------  Rs.350/-\n";
    cout << "7. G ---------------  Rs.450/-\n";
    cout << "8. H ---------------  Rs.155/-\n";
    cout << "9. I ---------------  Rs.100/-\n";
    cout << "10. J --------------  Rs.550/-\n";
    cout << "Pick your choice: ";
    cin >> choice;
	
    switch(choice){
        case 1:
            MRP = 150; 
            break;
        case 2:
            MRP = 95; 
            break;
        case 3:
            MRP = 250; 
            break;
        case 4:
            MRP = 120; 
            break;
        case 5:
            MRP = 170; 
            break;
        case 6:
            MRP = 350;
            break;
        case 7:
            MRP = 450;
            break;
        case 8:
            MRP = 155;
            break;
        case 9:
            MRP = 100;
            break;
        case 10:
            MRP = 550;
            break;
        default:
            cout << "Invalid Choice";
    }
        cout<< "MRP: "<< MRP << endl;
        GST = MRP * 0.18;
        cout << "GST: " << GST << endl;
        total = GST + MRP;
        cout<< "Total: " << total;        
    return 0;
}