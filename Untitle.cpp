//coding challenge day 21
//completed challenge

#include <iostream>
#include <string>

 //string library use for getline cin 

using namespace std;

//1st class person

class Person {
public:
    string name;
    int age;
    string address;
    string phoneNumber;

  
    void inputPersonDetails() {
        cout << "Enter ur Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter ur Age: ";
        cin >> age;

        cout << "Enter ur Address: ";
        cin.ignore();
        getline(cin, address);

        cout << "Enter ur Phone Number: ";
        cin.ignore();
        getline(cin, phoneNumber);
    }

    
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

             //2nd class employee ki

class Employee : public Person {
public:
    int employeeId;
    string jobTitle;
    double salary;

    
    void inputEmployeeDetails() {
        cout << "Enter Employee ID= ";
        cin >> employeeId;

        cout << "Enter Job Title= ";
        cin.ignore();
        getline(cin, jobTitle);

        cout << "Enter Salary(paisa)= ";
        cin >> salary;
    }

    
    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Job Title: " << jobTitle << endl;
        cout << "Salary: " << salary << endl;
    }
};

    //last 3rd class student ki information

class Student : public Person {
public:
    int studentId;
    string major;
    double gpa;


    void inputStudentDetails() {
        cout << "Enter Student ID: ";
        cin >> studentId;

        cout << "Enter Major: ";
        cin.ignore();
        getline(cin, major);

        cout << "Enter CGPA: ";
        cin >> gpa;
    }


    void displayStudentDetails() {
        cout << "Student ID: " << studentId << endl;
        cout << "Major: " << major << endl;
        cout << "CGPA: " << gpa << endl;    
    }
};
 

int main() {
    Employee emp;
    Student stu;
                                          //emp = employee

    cout << "Enter Employee details:\n";
    emp.inputPersonDetails();
    emp.inputEmployeeDetails();

                                           //stu = student 

    cout << "\nEnter Student details:\n";
    stu.inputPersonDetails();
    stu.inputStudentDetails();
                                        
    cout << "\nEmployee Details:\n";
    emp.displayPersonDetails();
    emp.displayEmployeeDetails();
                                        
    cout << "\nStudent Details:\n";
    stu.displayPersonDetails();
    stu.displayStudentDetails();

    return 0;
}
