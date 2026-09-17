#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

class Student {
private:
    int id;
    string name;
    string dept;
    int semester;
    string phone;
    string email;
    float cgpa;
    float feeDue;

public:
    Student(int studentId, string studentName, string studentDept, int studentSemester,
            string studentPhone, string studentEmail, float studentCgpa, float studentFeeDue) {
        id = studentId;
        name = studentName;
        dept = studentDept;
        semester = studentSemester;
        phone = studentPhone;
        email = studentEmail;
        cgpa = studentCgpa;
        feeDue = studentFeeDue;
    }

    int getId() { return id; }
    string getName() { return name; }
    string getDept() { return dept; }
    int getSemester() { return semester; }
    string getPhone() { return phone; }
    string getEmail() { return email; }
    float getCGPA() { return cgpa; }
    float getFeeDue() { return feeDue; }

    void updateInfo(string newName, string newDept, int newSemester,
                    string newPhone, string newEmail, float newCgpa) {
        name = newName;
        dept = newDept;
        semester = newSemester;
        phone = newPhone;
        email = newEmail;
        cgpa = newCgpa;
    }

    void payFee(float amount) {
        feeDue -= amount;
        if (feeDue < 0)
            feeDue = 0;
    }

    void display() {
        cout << left
             << setw(8) << id
             << setw(18) << name
             << setw(12) << dept
             << setw(10) << semester
             << setw(10) << cgpa
             << setw(12) << feeDue
             << endl;
    }

    void displayDetails() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << dept;
        cout << "\nSemester: " << semester;
        cout << "\nPhone: " << phone;
        cout << "\nEmail: " << email;
        cout << "\nCGPA: " << cgpa;
        cout << "\nFee Due: " << feeDue << endl;
    }
};

class Teacher {
private:
    int id;
    string name;
    string dept;
    string designation;
    string phone;
    string email;
    float salary;

public:
    Teacher(int teacherId, string teacherName, string teacherDept,
            string teacherDesignation, string teacherPhone,
            string teacherEmail, float teacherSalary) {
        id = teacherId;
        name = teacherName;
        dept = teacherDept;
        designation = teacherDesignation;
        phone = teacherPhone;
        email = teacherEmail;
        salary = teacherSalary;
    }

    int getId() { return id; }
    string getName() { return name; }
    string getDept() { return dept; }
    string getDesignation() { return designation; }
    string getPhone() { return phone; }
    string getEmail() { return email; }
    float getSalary() { return salary; }

    void updateInfo(string newName, string newDept,
                    string newDesignation, string newPhone,
                    string newEmail, float newSalary) {
        name = newName;
        dept = newDept;
        designation = newDesignation;
        phone = newPhone;
        email = newEmail;
        salary = newSalary;
    }

    void display() {
        cout << left
             << setw(8) << id
             << setw(18) << name
             << setw(12) << dept
             << setw(18) << designation
             << setw(12) << salary
             << endl;
    }

    void displayDetails() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << dept;
        cout << "\nDesignation: " << designation;
        cout << "\nPhone: " << phone;
        cout << "\nEmail: " << email;
        cout << "\nSalary: " << salary << endl;
    }
};

class Course {
private:
    int courseId;
    string courseName;
    string dept;
    int credit;
    string teacherName;

public:
    Course(int id, string name, string department,
           int courseCredit, string teacher) {
        courseId = id;
        courseName = name;
        dept = department;
        credit = courseCredit;
        teacherName = teacher;
    }

    int getId() { return courseId; }
    string getName() { return courseName; }
    string getDept() { return dept; }
    int getCredit() { return credit; }
    string getTeacher() { return teacherName; }

    void updateInfo(string newName, string newDept,
                    int newCredit, string newTeacher) {
        courseName = newName;
        dept = newDept;
        credit = newCredit;
        teacherName = newTeacher;
    }

    void display() {
        cout << left
             << setw(10) << courseId
             << setw(25) << courseName
             << setw(12) << dept
             << setw(10) << credit
             << setw(20) << teacherName
             << endl;
    }
};

class Department {
private:
    int id;
    string name;
    string head;
    string building;
    int students;

public:
    Department(int departmentId, string departmentName,
               string departmentHead, string departmentBuilding,
               int totalStudents) {
        id = departmentId;
        name = departmentName;
        head = departmentHead;
        building = departmentBuilding;
        students = totalStudents;
    }

    int getId() { return id; }
    string getName() { return name; }
    string getHead() { return head; }

    void updateInfo(string newName, string newHead,
                    string newBuilding, int newStudents) {
        name = newName;
        head = newHead;
        building = newBuilding;
        students = newStudents;
    }

    void display() {
        cout << left
             << setw(8) << id
             << setw(25) << name
             << setw(20) << head
             << setw(18) << building
             << setw(12) << students
             << endl;
    }
};

class Result {
private:
    int studentId;
    int courseId;
    float marks;
    float gradePoint;
    string grade;

public:
    Result(int sid, int cid, float mark) {
        studentId = sid;
        courseId = cid;
        marks = mark;

        if (marks >= 80) {
            grade = "A+";
            gradePoint = 4.00;
        }
        else if (marks >= 75) {
            grade = "A";
            gradePoint = 3.75;
        }
        else if (marks >= 70) {
            grade = "A-";
            gradePoint = 3.50;
        }
        else if (marks >= 65) {
            grade = "B+";
            gradePoint = 3.25;
        }
        else if (marks >= 60) {
            grade = "B";
            gradePoint = 3.00;
        }
        else if (marks >= 55) {
            grade = "B-";
            gradePoint = 2.75;
        }
        else if (marks >= 50) {
            grade = "C+";
            gradePoint = 2.50;
        }
        else if (marks >= 45) {
            grade = "C";
            gradePoint = 2.25;
        }
        else if (marks >= 40) {
            grade = "D";
            gradePoint = 2.00;
        }
        else {
            grade = "F";
            gradePoint = 0.00;
        }
    }

    int getStudentId() { return studentId; }
    int getCourseId() { return courseId; }
    float getMarks() { return marks; }
    float getGradePoint() { return gradePoint; }
    string getGrade() { return grade; }

    void display() {
        cout << left
             << setw(12) << studentId
             << setw(12) << courseId
             << setw(10) << marks
             << setw(10) << grade
             << setw(12) << gradePoint
             << endl;
    }
};

class Attendance {
private:
    int studentId;
    int courseId;
    int totalClass;
    int present;

public:
    Attendance(int sid, int cid, int total, int presentClass) {
        studentId = sid;
        courseId = cid;
        totalClass = total;
        present = presentClass;
    }

    int getStudentId() { return studentId; }
    int getCourseId() { return courseId; }

    float getPercentage() {
        if (totalClass == 0)
            return 0;
        return (present * 100.0) / totalClass;
    }

    void display() {
        cout << left
             << setw(12) << studentId
             << setw(12) << courseId
             << setw(12) << totalClass
             << setw(12) << present
             << setw(12) << getPercentage()
             << "%" << endl;
    }
};

class Enrollment {
private:
    int studentId;
    int courseId;
    string semester;

public:
    Enrollment(int sid, int cid, string sem) {
        studentId = sid;
        courseId = cid;
        semester = sem;
    }

    int getStudentId() { return studentId; }
    int getCourseId() { return courseId; }

    void display() {
        cout << left
             << setw(12) << studentId
             << setw(12) << courseId
             << setw(15) << semester
             << endl;
    }
};

class Notice {
private:
    int id;
    string title;
    string description;
    string date;

public:
    Notice(int noticeId, string noticeTitle,
           string noticeDescription, string noticeDate) {
        id = noticeId;
        title = noticeTitle;
        description = noticeDescription;
        date = noticeDate;
    }

    int getId() { return id; }

    void display() {
        cout << "\nNotice ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nDate: " << date;
        cout << "\nDescription: " << description << endl;
    }
};

class UniversityManagementSystem {
private:
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Course> courses;
    vector<Department> departments;
    vector<Result> results;
    vector<Attendance> attendance;
    vector<Enrollment> enrollments;
    vector<Notice> notices;

public:

    void clearScreen() {
        system("cls");
    }

    void pauseScreen() {
        system("pause");
    }

    bool studentExists(int id) {
        for (Student &s : students)
            if (s.getId() == id)
                return true;
        return false;
    }

    bool teacherExists(int id) {
        for (Teacher &t : teachers)
            if (t.getId() == id)
                return true;
        return false;
    }

    bool courseExists(int id) {
        for (Course &c : courses)
            if (c.getId() == id)
                return true;
        return false;
    }

    bool departmentExists(int id) {
        for (Department &d : departments)
            if (d.getId() == id)
                return true;
        return false;
    }

    void addStudent() {
        clearScreen();

        int id, semester;
        string name, dept, phone, email;
        float cgpa, feeDue;

        cout << "\nEnter Student ID: ";
        cin >> id;

        if (studentExists(id)) {
            cout << "\nStudent ID already exists!" << endl;
            Sleep(1500);
            return;
        }

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, dept);

        cout << "Enter Semester: ";
        cin >> semester;

        cin.ignore();

        cout << "Enter Phone: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "Enter CGPA: ";
        cin >> cgpa;

        cout << "Enter Fee Due: ";
        cin >> feeDue;

        students.push_back(Student(id, name, dept, semester,
                                   phone, email, cgpa, feeDue));

        cout << "\nStudent added successfully!" << endl;
        Sleep(1500);
    }

    void displayStudents() {
        clearScreen();

        if (students.empty()) {
            cout << "\nNo students found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- UNIVERSITY STUDENTS ----------------\n";

        cout << left
             << setw(8) << "ID"
             << setw(18) << "Name"
             << setw(12) << "Dept"
             << setw(10) << "Semester"
             << setw(10) << "CGPA"
             << setw(12) << "Fee Due"
             << endl;

        cout << "---------------------------------------------------------------\n";

        for (Student &s : students)
            s.display();

        cout << endl;
        pauseScreen();
    }

    void searchStudent() {
        clearScreen();

        int id;
        cout << "\nEnter Student ID: ";
        cin >> id;

        for (Student &s : students) {
            if (s.getId() == id) {
                cout << "\nStudent Found\n";
                s.displayDetails();
                cout << endl;
                pauseScreen();
                return;
            }
        }

        cout << "\nStudent not found!" << endl;
        Sleep(1500);
    }

    void updateStudent() {
        clearScreen();

        int id;
        cout << "\nEnter Student ID: ";
        cin >> id;

        for (Student &s : students) {
            if (s.getId() == id) {
                string name, dept, phone, email;
                int semester;
                float cgpa;

                cin.ignore();

                cout << "Enter New Name: ";
                getline(cin, name);

                cout << "Enter New Department: ";
                getline(cin, dept);

                cout << "Enter New Semester: ";
                cin >> semester;

                cin.ignore();

                cout << "Enter New Phone: ";
                getline(cin, phone);

                cout << "Enter New Email: ";
                getline(cin, email);

                cout << "Enter New CGPA: ";
                cin >> cgpa;

                s.updateInfo(name, dept, semester, phone, email, cgpa);

                cout << "\nStudent updated successfully!" << endl;
                Sleep(1500);
                return;
            }
        }

        cout << "\nStudent not found!" << endl;
        Sleep(1500);
    }

    void deleteStudent() {
        clearScreen();

        int id;
        cout << "\nEnter Student ID: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++) {
            if (students[i].getId() == id) {
                students.erase(students.begin() + i);
                cout << "\nStudent deleted successfully!" << endl;
                Sleep(1500);
                return;
            }
        }

        cout << "\nStudent not found!" << endl;
        Sleep(1500);
    }

    void addTeacher() {
        clearScreen();

        int id;
        string name, dept, designation, phone, email;
        float salary;

        cout << "\nEnter Teacher ID: ";
        cin >> id;

        if (teacherExists(id)) {
            cout << "\nTeacher ID already exists!" << endl;
            Sleep(1500);
            return;
        }

        cin.ignore();

        cout << "Enter Teacher Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, dept);

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Phone: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "Enter Salary: ";
        cin >> salary;

        teachers.push_back(Teacher(id, name, dept, designation,
                                   phone, email, salary));

        cout << "\nTeacher added successfully!" << endl;
        Sleep(1500);
    }

    void displayTeachers() {
        clearScreen();

        if (teachers.empty()) {
            cout << "\nNo teachers found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- UNIVERSITY TEACHERS ----------------\n";

        cout << left
             << setw(8) << "ID"
             << setw(18) << "Name"
             << setw(12) << "Dept"
             << setw(18) << "Designation"
             << setw(12) << "Salary"
             << endl;

        cout << "-------------------------------------------------------------\n";

        for (Teacher &t : teachers)
            t.display();

        cout << endl;
        pauseScreen();
    }

    void searchTeacher() {
        clearScreen();

        int id;
        cout << "\nEnter Teacher ID: ";
        cin >> id;

        for (Teacher &t : teachers) {
            if (t.getId() == id) {
                t.displayDetails();
                cout << endl;
                pauseScreen();
                return;
            }
        }

        cout << "\nTeacher not found!" << endl;
        Sleep(1500);
    }

    void updateTeacher() {
        clearScreen();

        int id;
        cout << "\nEnter Teacher ID: ";
        cin >> id;

        for (Teacher &t : teachers) {
            if (t.getId() == id) {
                string name, dept, designation, phone, email;
                float salary;

                cin.ignore();

                cout << "Enter New Name: ";
                getline(cin, name);

                cout << "Enter New Department: ";
                getline(cin, dept);

                cout << "Enter New Designation: ";
                getline(cin, designation);

                cout << "Enter New Phone: ";
                getline(cin, phone);

                cout << "Enter New Email: ";
                getline(cin, email);

                cout << "Enter New Salary: ";
                cin >> salary;

                t.updateInfo(name, dept, designation, phone, email, salary);

                cout << "\nTeacher updated successfully!" << endl;
                Sleep(1500);
                return;
            }
        }

        cout << "\nTeacher not found!" << endl;
        Sleep(1500);
    }

    void deleteTeacher() {
        clearScreen();

        int id;
        cout << "\nEnter Teacher ID: ";
        cin >> id;

        for (int i = 0; i < teachers.size(); i++) {
            if (teachers[i].getId() == id) {
                teachers.erase(teachers.begin() + i);
                cout << "\nTeacher deleted successfully!" << endl;
                Sleep(1500);
                return;
            }
        }

        cout << "\nTeacher not found!" << endl;
        Sleep(1500);
    }

    void addCourse() {
        clearScreen();

        int id, credit;
        string name, dept, teacher;

        cout << "\nEnter Course ID: ";
        cin >> id;

        if (courseExists(id)) {
            cout << "\nCourse ID already exists!" << endl;
            Sleep(1500);
            return;
        }

        cin.ignore();

        cout << "Enter Course Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, dept);

        cout << "Enter Credit: ";
        cin >> credit;

        cin.ignore();

        cout << "Enter Teacher Name: ";
        getline(cin, teacher);

        courses.push_back(Course(id, name, dept, credit, teacher));

        cout << "\nCourse added successfully!" << endl;
        Sleep(1500);
    }

    void displayCourses() {
        clearScreen();

        if (courses.empty()) {
            cout << "\nNo courses found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- UNIVERSITY COURSES ----------------\n";

        cout << left
             << setw(10) << "ID"
             << setw(25) << "Course"
             << setw(12) << "Dept"
             << setw(10) << "Credit"
             << setw(20) << "Teacher"
             << endl;

        cout << "-----------------------------------------------------------------\n";

        for (Course &c : courses)
            c.display();

        cout << endl;
        pauseScreen();
    }

    void updateCourse() {
        clearScreen();

        int id;
        cout << "\nEnter Course ID: ";
        cin >> id;

        for (Course &c : courses) {
            if (c.getId() == id) {
                string name, dept, teacher;
                int credit;

                cin.ignore();

                cout << "Enter New Course Name: ";
                getline(cin, name);

                cout << "Enter New Department: ";
                getline(cin, dept);

                cout << "Enter New Credit: ";
                cin >> credit;

                cin.ignore();

                cout << "Enter New Teacher: ";
                getline(cin, teacher);

                c.updateInfo(name, dept, credit, teacher);

                cout << "\nCourse updated successfully!" << endl;
                Sleep(1500);
                return;
            }
        }

        cout << "\nCourse not found!" << endl;
        Sleep(1500);
    }

    void deleteCourse() {
        clearScreen();

        int id;
        cout << "\nEnter Course ID: ";
        cin >> id;

        for (int i = 0; i < courses.size(); i++) {
            if (courses[i].getId() == id) {
                courses.erase(courses.begin() + i);
                cout << "\nCourse deleted successfully!" << endl;
                Sleep(1500);
                return;
            }
        }

        cout << "\nCourse not found!" << endl;
        Sleep(1500);
    }

    void addDepartment() {
        clearScreen();

        int id, studentsCount;
        string name, head, building;

        cout << "\nEnter Department ID: ";
        cin >> id;

        if (departmentExists(id)) {
            cout << "\nDepartment ID already exists!" << endl;
            Sleep(1500);
            return;
        }

        cin.ignore();

        cout << "Enter Department Name: ";
        getline(cin, name);

        cout << "Enter Head of Department: ";
        getline(cin, head);

        cout << "Enter Building: ";
        getline(cin, building);

        cout << "Enter Number of Students: ";
        cin >> studentsCount;

        departments.push_back(Department(id, name, head, building, studentsCount));

        cout << "\nDepartment added successfully!" << endl;
        Sleep(1500);
    }

    void displayDepartments() {
        clearScreen();

        if (departments.empty()) {
            cout << "\nNo departments found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- DEPARTMENTS ----------------\n";

        cout << left
             << setw(8) << "ID"
             << setw(25) << "Department"
             << setw(20) << "Head"
             << setw(18) << "Building"
             << setw(12) << "Students"
             << endl;

        cout << "-----------------------------------------------------------------\n";

        for (Department &d : departments)
            d.display();

        cout << endl;
        pauseScreen();
    }

    void enrollStudent() {
        clearScreen();

        int studentId, courseId;
        string semester;

        cout << "\nEnter Student ID: ";
        cin >> studentId;

        if (!studentExists(studentId)) {
            cout << "\nStudent not found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "Enter Course ID: ";
        cin >> courseId;

        if (!courseExists(courseId)) {
            cout << "\nCourse not found!" << endl;
            Sleep(1500);
            return;
        }

        cin.ignore();

        cout << "Enter Semester: ";
        getline(cin, semester);

        enrollments.push_back(Enrollment(studentId, courseId, semester));

        cout << "\nStudent enrolled successfully!" << endl;
        Sleep(1500);
    }

    void displayEnrollments() {
        clearScreen();

        if (enrollments.empty()) {
            cout << "\nNo enrollment records found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- ENROLLMENTS ----------------\n";

        cout << left
             << setw(12) << "Student ID"
             << setw(12) << "Course ID"
             << setw(15) << "Semester"
             << endl;

        cout << "---------------------------------------------\n";

        for (Enrollment &e : enrollments)
            e.display();

        cout << endl;
        pauseScreen();
    }

    void addResult() {
        clearScreen();

        int studentId, courseId;
        float marks;

        cout << "\nEnter Student ID: ";
        cin >> studentId;

        if (!studentExists(studentId)) {
            cout << "\nStudent not found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "Enter Course ID: ";
        cin >> courseId;

        if (!courseExists(courseId)) {
            cout << "\nCourse not found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "Enter Marks: ";
        cin >> marks;

        if (marks < 0 || marks > 100) {
            cout << "\nInvalid marks!" << endl;
            Sleep(1500);
            return;
        }

        results.push_back(Result(studentId, courseId, marks));

        cout << "\nResult added successfully!" << endl;
        Sleep(1500);
    }

    void displayResults() {
        clearScreen();

        if (results.empty()) {
            cout << "\nNo result records found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- RESULTS ----------------\n";

        cout << left
             << setw(12) << "Student ID"
             << setw(12) << "Course ID"
             << setw(10) << "Marks"
             << setw(10) << "Grade"
             << setw(12) << "Point"
             << endl;

        cout << "-------------------------------------------\n";

        for (Result &r : results)
            r.display();

        cout << endl;
        pauseScreen();
    }

    void searchStudentResult() {
        clearScreen();

        int studentId;
        cout << "\nEnter Student ID: ";
        cin >> studentId;

        bool found = false;

        cout << "\n---------------- STUDENT RESULT ----------------\n";

        for (Result &r : results) {
            if (r.getStudentId() == studentId) {
                r.display();
                found = true;
            }
        }

        if (!found)
            cout << "\nNo result found for this student!" << endl;

        cout << endl;
        pauseScreen();
    }

    void addAttendance() {
        clearScreen();

        int studentId, courseId, total, present;

        cout << "\nEnter Student ID: ";
        cin >> studentId;

        if (!studentExists(studentId)) {
            cout << "\nStudent not found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "Enter Course ID: ";
        cin >> courseId;

        if (!courseExists(courseId)) {
            cout << "\nCourse not found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "Enter Total Classes: ";
        cin >> total;

        cout << "Enter Present Classes: ";
        cin >> present;

        if (total < 0 || present < 0 || present > total) {
            cout << "\nInvalid attendance data!" << endl;
            Sleep(1500);
            return;
        }

        attendance.push_back(Attendance(studentId, courseId, total, present));

        cout << "\nAttendance added successfully!" << endl;
        Sleep(1500);
    }

    void displayAttendance() {
        clearScreen();

        if (attendance.empty()) {
            cout << "\nNo attendance records found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- ATTENDANCE ----------------\n";

        cout << left
             << setw(12) << "Student ID"
             << setw(12) << "Course ID"
             << setw(12) << "Total"
             << setw(12) << "Present"
             << setw(12) << "Percentage"
             << endl;

        cout << "------------------------------------------------------\n";

        for (Attendance &a : attendance)
            a.display();

        cout << endl;
        pauseScreen();
    }

    void payStudentFee() {
        clearScreen();

        int id;
        float amount;

        cout << "\nEnter Student ID: ";
        cin >> id;

        for (Student &s : students) {
            if (s.getId() == id) {
                cout << "Current Fee Due: " << s.getFeeDue() << endl;
                cout << "Enter Payment Amount: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "\nInvalid amount!" << endl;
                    Sleep(1500);
                    return;
                }

                s.payFee(amount);

                cout << "\nPayment successful!" << endl;
                cout << "Remaining Fee Due: " << s.getFeeDue() << endl;

                Sleep(2000);
                return;
            }
        }

        cout << "\nStudent not found!" << endl;
        Sleep(1500);
    }

    void displayFee() {
        clearScreen();

        if (students.empty()) {
            cout << "\nNo students found!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n---------------- STUDENT FEES ----------------\n";

        cout << left
             << setw(8) << "ID"
             << setw(20) << "Name"
             << setw(15) << "Department"
             << setw(12) << "Fee Due"
             << endl;

        cout << "-------------------------------------------------\n";

        for (Student &s : students) {
            cout << left
                 << setw(8) << s.getId()
                 << setw(20) << s.getName()
                 << setw(15) << s.getDept()
                 << setw(12) << s.getFeeDue()
                 << endl;
        }

        cout << endl;
        pauseScreen();
    }

    void addNotice() {
        clearScreen();

        int id;
        string title, description, date;

        cout << "\nEnter Notice ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Notice Title: ";
        getline(cin, title);

        cout << "Enter Description: ";
        getline(cin, description);

        cout << "Enter Date: ";
        getline(cin, date);

        notices.push_back(Notice(id, title, description, date));

        cout << "\nNotice published successfully!" << endl;
        Sleep(1500);
    }

    void displayNotices() {
        clearScreen();

        if (notices.empty()) {
            cout << "\nNo notices available!" << endl;
            Sleep(1500);
            return;
        }

        cout << "\n================ UNIVERSITY NOTICES ================\n";

        for (Notice &n : notices) {
            n.display();
            cout << "-----------------------------------------------------\n";
        }

        pauseScreen();
    }

    void dashboard() {
        clearScreen();

        cout << "\n============================================\n";
        cout << "       UNIVERSITY MANAGEMENT SYSTEM\n";
        cout << "============================================\n";

        cout << "\nTotal Students     : " << students.size();
        cout << "\nTotal Teachers     : " << teachers.size();
        cout << "\nTotal Courses      : " << courses.size();
        cout << "\nTotal Departments  : " << departments.size();
        cout << "\nTotal Enrollments  : " << enrollments.size();
        cout << "\nTotal Results      : " << results.size();
        cout << "\nTotal Notices      : " << notices.size();

        cout << "\n\n============================================\n";

        pauseScreen();
    }

    void studentMenu() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n========== STUDENT MANAGEMENT ==========\n";
            cout << "1. Add Student\n";
            cout << "2. Display Students\n";
            cout << "3. Search Student\n";
            cout << "4. Update Student\n";
            cout << "5. Delete Student\n";
            cout << "6. Student Result\n";
            cout << "7. Student Fee\n";
            cout << "8. Pay Fee\n";
            cout << "9. Back\n";
            cout << "========================================\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
                addStudent();
            else if (choice == 2)
                displayStudents();
            else if (choice == 3)
                searchStudent();
            else if (choice == 4)
                updateStudent();
            else if (choice == 5)
                deleteStudent();
            else if (choice == 6)
                searchStudentResult();
            else if (choice == 7)
                displayFee();
            else if (choice == 8)
                payStudentFee();
            else if (choice == 9)
                break;
            else {
                cout << "\nInvalid choice!" << endl;
                Sleep(1200);
            }
        }
    }

    void teacherMenu() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n========== TEACHER MANAGEMENT ==========\n";
            cout << "1. Add Teacher\n";
            cout << "2. Display Teachers\n";
            cout << "3. Search Teacher\n";
            cout << "4. Update Teacher\n";
            cout << "5. Delete Teacher\n";
            cout << "6. Back\n";
            cout << "========================================\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
                addTeacher();
            else if (choice == 2)
                displayTeachers();
            else if (choice == 3)
                searchTeacher();
            else if (choice == 4)
                updateTeacher();
            else if (choice == 5)
                deleteTeacher();
            else if (choice == 6)
                break;
            else {
                cout << "\nInvalid choice!" << endl;
                Sleep(1200);
            }
        }
    }

    void courseMenu() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n========== COURSE MANAGEMENT ==========\n";
            cout << "1. Add Course\n";
            cout << "2. Display Courses\n";
            cout << "3. Update Course\n";
            cout << "4. Delete Course\n";
            cout << "5. Back\n";
            cout << "=======================================\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
                addCourse();
            else if (choice == 2)
                displayCourses();
            else if (choice == 3)
                updateCourse();
            else if (choice == 4)
                deleteCourse();
            else if (choice == 5)
                break;
            else {
                cout << "\nInvalid choice!" << endl;
                Sleep(1200);
            }
        }
    }

    void departmentMenu() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n======== DEPARTMENT MANAGEMENT ========\n";
            cout << "1. Add Department\n";
            cout << "2. Display Departments\n";
            cout << "3. Back\n";
            cout << "=======================================\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
                addDepartment();
            else if (choice == 2)
                displayDepartments();
            else if (choice == 3)
                break;
            else {
                cout << "\nInvalid choice!" << endl;
                Sleep(1200);
            }
        }
    }

    void academicMenu() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n========== ACADEMIC MANAGEMENT ==========\n";
            cout << "1. Enroll Student in Course\n";
            cout << "2. Display Enrollments\n";
            cout << "3. Add Result\n";
            cout << "4. Display All Results\n";
            cout << "5. Search Student Result\n";
            cout << "6. Add Attendance\n";
            cout << "7. Display Attendance\n";
            cout << "8. Back\n";
            cout << "=========================================\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
                enrollStudent();
            else if (choice == 2)
                displayEnrollments();
            else if (choice == 3)
                addResult();
            else if (choice == 4)
                displayResults();
            else if (choice == 5)
                searchStudentResult();
            else if (choice == 6)
                addAttendance();
            else if (choice == 7)
                displayAttendance();
            else if (choice == 8)
                break;
            else {
                cout << "\nInvalid choice!" << endl;
                Sleep(1200);
            }
        }
    }

    void noticeMenu() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n========== NOTICE MANAGEMENT ==========\n";
            cout << "1. Publish Notice\n";
            cout << "2. Display Notices\n";
            cout << "3. Back\n";
            cout << "======================================\n";
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
                addNotice();
            else if (choice == 2)
                displayNotices();
            else if (choice == 3)
                break;
            else {
                cout << "\nInvalid choice!" << endl;
                Sleep(1200);
            }
        }
    }

    void run() {
        int choice;

        while (true) {
            clearScreen();

            cout << "\n============================================\n";
            cout << "       UNIVERSITY MANAGEMENT SYSTEM\n";
            cout << "============================================\n";
            cout << "1. Dashboard\n";
            cout << "2. Student Management\n";
            cout << "3. Teacher Management\n";
            cout << "4. Course Management\n";
            cout << "5. Department Management\n";
            cout << "6. Academic Management\n";
            cout << "7. Notice Management\n";
            cout << "8. Fee Management\n";
            cout << "9. Exit\n";
            cout << "============================================\n";
            cout << "Enter Your Choice: ";
            cin >> choice;

            if (choice == 1)
                dashboard();
            else if (choice == 2)
                studentMenu();
            else if (choice == 3)
                teacherMenu();
            else if (choice == 4)
                courseMenu();
            else if (choice == 5)
                departmentMenu();
            else if (choice == 6)
                academicMenu();
            else if (choice == 7)
                noticeMenu();
            else if (choice == 8) {
                int feeChoice;

                while (true) {
                    clearScreen();

                    cout << "\n========== FEE MANAGEMENT ==========\n";
                    cout << "1. Display All Fees\n";
                    cout << "2. Pay Student Fee\n";
                    cout << "3. Back\n";
                    cout << "====================================\n";
                    cout << "Enter Choice: ";
                    cin >> feeChoice;

                    if (feeChoice == 1)
                        displayFee();
                    else if (feeChoice == 2)
                        payStudentFee();
                    else if (feeChoice == 3)
                        break;
                    else {
                        cout << "\nInvalid choice!" << endl;
                        Sleep(1200);
                    }
                }
            }
            else if (choice == 9) {
                clearScreen();
                cout << "\nProgram Exited Successfully.\n";
                Sleep(1000);
                break;
            }
            else {
                cout << "\nInvalid choice! Please try again." << endl;
                Sleep(1200);
            }
        }
    }
};

int main() {
    UniversityManagementSystem ums;
    ums.run();

    return 0;
}