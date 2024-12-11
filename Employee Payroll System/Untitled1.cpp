#include<iostream>
using namespace std;
class Employee{
    int empID;
    string name;
    float salary;
public:
    Employee(int ei,string N,float S);
    float calculate_Annual_Salary();
    void display_Employee_Details();
};

Employee::Employee(int ei,string N,float S){
    empID=ei;
    name=N;
    salary=S;
}

float Employee::calculate_Annual_Salary(){
    return salary*12;
}

void Employee::display_Employee_Details(){
    cout<<"Employee ID :"<<empID<<endl;
    cout<<"Employee name :"<<name<<endl;
    cout<<"Monthly salary :"<<salary<<endl;
    cout<<"Annual Salary :"<<calculate_Annual_Salary()<<endl<<endl;
}

int main(){
   Employee emp[3] = { Employee(0, "", 0.0), Employee(0, "", 0.0), Employee(0, "", 0.0) };
    for(int i=0;i<3;i++)
    {
        float salary;
        int Id;
        string name;
        cout<<"Enter Employee Id :";
        cin>>Id;
        cout<<"Enter Employee name :";
        cin>>name;
        cout<<"Enter monthly salary of Employee :";
        cin>>salary;

        emp[i]=Employee(Id,name,salary);
    }
    for(int i=0;i<3;i++)
    {
        emp[i].display_Employee_Details();
    }
}
