#include<iostream>
using namespace std;

class Student {
    string name;
    int rollNumber;
    float marks[3];
public:
    Student(string N, int RN, float M[3]);
    float calculateAverage();
    void displayDetails();
};

Student::Student(string N, int RN, float M[3]) {
    name = N;
    rollNumber = RN;
    for (int i = 0; i < 3; i++) {
        marks[i] = M[i];
    }
}

float Student::calculateAverage() {
    float total = 0;
    for (int i = 0; i < 3; i++) {
        total += marks[i];
    }
    return total / 3;
}

void Student::displayDetails() {
    cout << "Name: " << name << endl;
    cout << "ID: " << rollNumber << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Mark " << i + 1 << ": " << marks[i] << endl;
    }
    cout << "Average marks: " << calculateAverage() << endl;
}

int main() {
    string name;
    int rollNumber;
    float marks[3];

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollNumber;

    for (int i = 0; i < 3; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
    }
    cout<<endl;
    Student ob(name, rollNumber, marks);
    ob.displayDetails();

    return 0;
}
