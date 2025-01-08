//nesting of member function...
#include<iostream>
using namespace std;
class nest{
    double baseSalary,bonus;
public:
    void read(double s,double B){
        baseSalary=s;
        bonus=B;
    }
    double calc(){
        return baseSalary+bonus;
    }
    void show(){
        cout<<"base salary :"<<baseSalary<<endl;
        cout<<"salary with bonus:"<<calc();
    }
};
int main(){
    nest ob;
    ob.read(400,200);
    ob.calc();
    ob.show();
    return 0;
}
