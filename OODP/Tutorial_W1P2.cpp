//Create a class to represent a student in a grading system. Include attributes
//for the students name, ID,and an array to store grades.
//Implement methods to calculate the average grade, display the students
//information, and add a new grade.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;
    int grades[5] = {0};
    double avg;

        void average() {
        int sum = 0, count = 0;
        for (int i = 0; i < 5; i++) {
            if (grades[i] != 0) {
                sum += grades[i];
                count++;
            }
        }
        if (count == 0) {
            cout << "No grades available to calculate average." << endl;
        } else {
            avg = (double)sum / count;
            cout << "Average grade is: " << avg << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Grades: ";
        for (int i = 0; i < 5; i++) {
            if (grades[i] != 0) {
                cout << grades[i] << " " << endl;
            }
        }
        cout << "Average: " << avg << endl;
        cout << endl;
    }

    void addGrade(int grade) {
        bool added = false;
        for (int i = 0; i < 5; i++) {
            if (grades[i] == 0) { 
                grades[i] = grade;
                added = true;
                break;
            }
        }
        if (!added) {
            cout << "No space to add a new grade. The grades array is full." << endl;
        } else {
            cout << "Grade added successfully." << endl;
        }
    }
};

int main() {
    Student student;
    string choice;

    do {
        cout << "Enter student name: ";
        cin >> student.name;
        cout << "Enter student ID: ";
        cin >> student.id;

        cout << "Enter up to 5 grades (enter 0 for unused slots): ";
        for (int i = 0; i < 5; i++) {
            cin >> student.grades[i];
        }

        student.average();
        student.display();

        int newGrade;
        cout << "Enter a new grade to add: ";
        cin >> newGrade;
        student.addGrade(newGrade);
        student.display(); 

        cout << "Do you want to enter details for another student? (y/n): ";
        cin >> choice;

    } while (choice == "y");

    return 0;
}

