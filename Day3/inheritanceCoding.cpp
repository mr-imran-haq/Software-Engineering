#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayBasicInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int studentID;
    string department;
    float cgpa;

public:
    Student(string name, int age, int studentID, string department, float cgpa)
        : Person(name, age) {
        this->studentID = studentID;
        this->department = department;
        this->cgpa = cgpa;
    }

    void displayStudentInfo() {
        displayBasicInfo();
        cout << "Student ID: " << studentID << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student student1("Imran", 21, 101, "CSE", 3.85);
    Student student2("Rahim", 22, 102, "EEE", 3.60);
    Student student3("Karim", 21, 103, "SWE", 3.75);

    cout << "Student 1" << endl;
    student1.displayStudentInfo();

    cout << "\nStudent 2" << endl;
    student2.displayStudentInfo();

    cout << "\nStudent 3" << endl;
    student3.displayStudentInfo();

    return 0;
}