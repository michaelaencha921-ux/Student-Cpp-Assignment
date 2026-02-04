#include <iostream>
#include <string>
using namespace std;

// Define a class called Student
class Student {
private:
    string name;
    string registrationNumber;
    string course;
    int year;

public:
    // Constructor to initialize values
    Student(string n, string reg, string c, int y) {
        name = n;
        registrationNumber = reg;
        course = c;
        year = y;
    }

    // Method to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Reg No: " << registrationNumber << endl;
        cout << "Course: " << course << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create Student object with values
    Student student(
        "Michael",
        "TMU/IT/02555/024",
        "Information Technology",
        2
    );

    // Call method
    student.displayDetails();

    return 0;
}