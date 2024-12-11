#include<iostream>
using namespace std;
class Vehicle{
    string vehicleNumber,model;
    float mileage;
public:
    Vehicle(string vN,string VM,float M){
        vehicleNumber=vN;
        model=VM;
        mileage=M;
    }
    void displayDetails();
    void updateMileage(float newMileage);
};

void Vehicle::displayDetails(){
    cout<<"vehicle Number:"<<vehicleNumber<<endl;
    cout<<"model:"<<model<<endl;
    cout<<"mileage:"<<mileage<<endl<<endl;
}

void Vehicle::updateMileage(float newMileage){
    mileage+=newMileage;
}

int main(){
    Vehicle ob1("vihchel 1","Model 1",60);
    Vehicle ob2("vihchel 2","Model 2",50);

    ob1.displayDetails();
    ob2.displayDetails();

    ob1.updateMileage(10);
    ob1.displayDetails();

    ob2.updateMileage(5);
    ob2.displayDetails();

}

