#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std;


class Student {
private:
    string name;
    int id;
    string dept;
    float cgpa;

public:

    Student(int studentId, string studentName, string studentDept, float studentCgpa) {
        id = studentId;
        name = studentName;
        dept = studentDept;
        cgpa = studentCgpa;
    }

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    string getDept() {
        return dept;
    }

    float getCGPA() {
        return cgpa;
    }

    void display() {
        cout << left
             << setw(8) << id
             << setw(15) << name
             << setw(15) << dept
             << setw(8) << cgpa
             << endl;
    }

    void updateInfo(string newName, string newDept, float newCgpa) {
        name = newName;
        dept = newDept;
        cgpa = newCgpa;
    }
};



class Student_Management_System {

private:
    vector<Student> Students;

public:

    void clearScreen() {
        system("cls");
    }


    void inputInfo() {

        clearScreen();

        int id;
        string name, dept;
        float cgpa;

        cout << "\nEnter Student ID: ";
        cin >> id;

        // Check duplicate ID
        for (Student &s : Students) {

            if (s.getId() == id) {

                cout << "Student ID already exists!" << endl;

                Sleep(1500);

                return;
            }
        }

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, dept);

        cout << "Enter CGPA: ";
        cin >> cgpa;

        Students.push_back(
            Student(id, name, dept, cgpa)
        );

        cout << "\nStudent added successfully!" << endl;

        Sleep(1500);
    }


    void displayInfo() {

        clearScreen();

        if (Students.empty()) {

            cout << "\nThere Are No Students." << endl;

            Sleep(1500);

            return;
        }


        cout << "\n----------------------------" << endl;
        cout << "       STUDENT LIST" << endl;
        cout << "----------------------------" << endl;


        cout << left
             << setw(8) << "ID"
             << setw(15) << "Name"
             << setw(15) << "Dept"
             << setw(8) << "CGPA"
             << endl;


        cout << "----------------------------------------------" << endl;


        for (Student &s : Students) {

            s.display();

        }

        cout << endl;

        system("pause");
    }


    // Search Student
    void searchStudent() {

        clearScreen();

        int searchId;

        cout << "\nEnter Student ID: ";
        cin >> searchId;


        for (Student &s : Students) {

            if (s.getId() == searchId) {

                cout << "\n----------------------------" << endl;
                cout << "       STUDENT FOUND" << endl;
                cout << "----------------------------" << endl;

                cout << "ID: " << s.getId() << endl;
                cout << "Name: " << s.getName() << endl;
                cout << "Department: " << s.getDept() << endl;
                cout << "CGPA: " << s.getCGPA() << endl;

                cout << endl;

                system("pause");

                return;
            }
        }


        cout << "\nStudent not found!" << endl;

        Sleep(1500);
    }
};



int main() {

    Student_Management_System sms;

    int choice;


    while (true) {

        sms.clearScreen();

        cout << "\n----------------------------" << endl;
        cout << "   STUDENT MANAGEMENT SYSTEM" << endl;
        cout << "----------------------------" << endl;

        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;

        cout << "----------------------------" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;


        if (choice == 1) {

            sms.inputInfo();

        }

        else if (choice == 2) {

            sms.displayInfo();

        }

        else if (choice == 3) {

            sms.searchStudent();

        }

        else if (choice == 4) {

            sms.clearScreen();

            cout << "\nProgram Exited Successfully." << endl;

            Sleep(1000);

            break;

        }

        else {

            cout << "\nInvalid Choice! Please Try Again." << endl;

            Sleep(1500);
        }
    }


    return 0;
}