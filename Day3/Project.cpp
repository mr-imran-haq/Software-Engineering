#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Person {
private:
    string name;
    int id;

public:
    Person(int id, string name) {
        this->id = id;
        this->name = name;
    }

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    void setName(string name) {
        this->name = name;
    }

    void displayBasicInfo() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string department;
    float cgpa;

public:
    Student(int id, string name, string department, float cgpa)
        : Person(id, name) {
        this->department = department;
        this->cgpa = cgpa;
    }

    string getDepartment() {
        return department;
    }

    float getCGPA() {
        return cgpa;
    }

    void setDepartment(string department) {
        this->department = department;
    }

    void setCGPA(float cgpa) {
        this->cgpa = cgpa;
    }

    void displayStudentInfo() {
        cout << left << setw(10) << getId()
             << setw(20) << getName()
             << setw(15) << department
             << setw(10) << cgpa << endl;
    }
};

class StudentManagementSystem {
private:
    vector<Student> students;

public:
    void addStudent() {
        int id;
        string name, department;
        float cgpa;

        cout << "Enter Student ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter CGPA: ";
        cin >> cgpa;

        students.push_back(Student(id, name, department, cgpa));

        cout << "\nStudent added successfully.\n";
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "\nNo students found.\n";
            return;
        }

        cout << "\n";
        cout << left << setw(10) << "ID"
             << setw(20) << "Name"
             << setw(15) << "Department"
             << setw(10) << "CGPA" << endl;

        cout << string(55, '-') << endl;

        for (Student &student : students) {
            student.displayStudentInfo();
        }
    }

    void searchStudent() {
        int id;

        cout << "Enter Student ID: ";
        cin >> id;

        for (Student &student : students) {
            if (student.getId() == id) {
                cout << "\nStudent Found\n";
                cout << "-------------\n";
                student.displayBasicInfo();
                cout << "Department: " << student.getDepartment() << endl;
                cout << "CGPA: " << student.getCGPA() << endl;
                return;
            }
        }

        cout << "\nStudent not found.\n";
    }

    void updateStudent() {
        int id;

        cout << "Enter Student ID: ";
        cin >> id;

        for (Student &student : students) {
            if (student.getId() == id) {
                string name, department;
                float cgpa;

                cin.ignore();

                cout << "Enter New Name: ";
                getline(cin, name);

                cout << "Enter New Department: ";
                getline(cin, department);

                cout << "Enter New CGPA: ";
                cin >> cgpa;

                student.setName(name);
                student.setDepartment(department);
                student.setCGPA(cgpa);

                cout << "\nStudent updated successfully.\n";
                return;
            }
        }

        cout << "\nStudent not found.\n";
    }

    void deleteStudent() {
        int id;

        cout << "Enter Student ID: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++) {
            if (students[i].getId() == id) {
                students.erase(students.begin() + i);

                cout << "\nStudent deleted successfully.\n";
                return;
            }
        }

        cout << "\nStudent not found.\n";
    }

    void menu() {
        int choice;

        do {
            cout << "\n===== Student Management System =====\n";
            cout << "1. Add Student\n";
            cout << "2. Display Students\n";
            cout << "3. Search Student\n";
            cout << "4. Update Student\n";
            cout << "5. Delete Student\n";
            cout << "0. Exit\n";
            cout << "Enter Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addStudent();
                    break;

                case 2:
                    displayStudents();
                    break;

                case 3:
                    searchStudent();
                    break;

                case 4:
                    updateStudent();
                    break;

                case 5:
                    deleteStudent();
                    break;

                case 0:
                    cout << "\nProgram ended.\n";
                    break;

                default:
                    cout << "\nInvalid choice.\n";
            }

        } while (choice != 0);
    }
};

int main() {
    StudentManagementSystem system;
    system.menu();

    return 0;
}