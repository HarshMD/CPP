#include<iostream>
using namespace std;

class Employee{
    private:
        int salary;
    public: 
        Employee(int s){
            salary = s;
        }
        friend void displaysalary(Employee emp);
};
void displaysalary(Employee emp)
{
    cout<<"Salary is: "<<emp.salary;
}
int main(){
    Employee myEmp(5000);
    displaysalary(myEmp);
    return 0;
}


