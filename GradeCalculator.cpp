#include <iostream>
using namespace std;

class GradeCalculator {
private:
    int marks[5];
    int total = 0;
    float average;
    char grade;

public:
    void inputMarks() {
        cout << "Enter marks for 5 subjects (0–100):" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject "<< i + 1<< ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculateAverage() {
        average = total / 5.0;
    }

    void calculateGrade() {
        if (average >= 90)
            grade = 'A';
        else if (average >= 80)
            grade = 'B';
        else if (average >= 70)
            grade = 'C';
        else if (average >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayResult() {
        cout << "\nTotal Marks: " << total << endl;
        cout << "Average: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    GradeCalculator student;
    student.inputMarks();
    student.calculateAverage();
    student.calculateGrade();
    student.displayResult();
    return 0;
}
