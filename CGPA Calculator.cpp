#include <iostream>
using namespace std;

int main() {
    double totalMarks, obtainedMarks; //variable decleration
    float percentage = 0.0, gpa;
    
    cout << "Enter your total Marks: "; //taking number from user
    cin >> totalMarks;
    cout << "Enter your obtained marks: ";
    cin >> obtainedMarks;
    
    if (obtainedMarks <= totalMarks) { //if else condition
        percentage = 100 * (obtainedMarks) / (totalMarks);
    } else {
        cout << "Incorrect obtained marks" << endl;
        
    }

    if (percentage >= 90 && percentage <= 100) { //main working have done in this section
        gpa = 4.00;
        cout << "Your Grade is \"A+\ you are too much high, i can't even reach you ";
    } else if (percentage >= 80) {
        gpa = 3.66 * (percentage / 80);
        cout << "Your Grade is \"A-\ you are sad because of you need little bit more  ";
    } else if (percentage >= 75) {
        gpa = 3.33 * (percentage / 75);
        cout << "Your Grade is \"B+\ i am Badman ";
    } else if (percentage >= 71) {
        gpa = 3.00 * (percentage / 71);
        cout << "Your Grade is \"B\ you are not importnat ";
    } else if (percentage >= 68) {
        gpa = 2.66 * (percentage / 68);
        cout << "Your Grade is \"B-\ you do not even exist in my world ";
    } else if (percentage >= 61) {
        gpa = 2.00 * (percentage / 61);
        cout << "Your Grade is \"C\ now i am thinking about you little bit";
    } else if (percentage >= 50) {
        gpa = 1.00 * (percentage / 50);
        cout << "Your Grade is \"D\ you do not have a bad personality ";
    } else {
        gpa = 0.00;
        cout << "Your Grade is \"F\ yes you are the only one ";
    }

    cout << endl << "Your GPA is: " << gpa << endl;
    cout << "Your percentage is: " << percentage << endl;
    
    return 0;
}

