#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    float grade;
    string section;
    int rollNo;

public:
    Student(string n, int a, float g, string s, int r) : name(n), age(a), grade(g), section(s), rollNo(r) {}

    void displayDetails() {
        cout << "Student Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Grade: " << this->grade << endl;
        cout << "Section: " << this->section << endl;
        cout << "Roll No: " << this->rollNo << endl;
    }
};

int main() {
    Student student1("Ashutosh", 20, 82, "K23ST", 15);
    student1.displayDetails();

    return 0;
}
