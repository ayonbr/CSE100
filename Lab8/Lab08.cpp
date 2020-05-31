/*------------------------------------------------------------
// FILENAME: Lab08.cpp
// SPECIFICATION: Incorporating and testing of the Student header file
//-----------------------------------------------------------*/

#include <iostream>
// Import the Student header file here
#include "Student.h"

using namespace std;

int main()
{
    // Declare variables where you will store
    // inputs from user
    string firstName;
    string lastName;

    // ==================== Test The Constructor 1 ====================

    // Prompt and ask the user for
    //
    //      firstName and lastName.
    //
    // of the first student. Store these inputs in the local variables
    cout << "ENTER FIRST STUDENT INFORMATIONS " << endl;
    cout << "Enter first name: " << endl;
    cin >> firstName;
    cout << "Enter last name: " << endl;
    cin >> lastName;

    // Use the constructor 1 of Student with two arguments to create a
    // brand-new object called student1, by using firstName and lastName
    Student student1(firstName,lastName);

    // Display the information of student1
    //
    // Please use the object and methods to retrieve the information. Do NOT
    // use the local varibales in this main function.
    //
    // The message template, the <> part should be replaced by the data
    // in student1:
    //
    //      FIRST STUDENT INFORMATIONS
    //      The name of the student is: <student1's fullname>
    //      Major is: <student1's major>
    //      The student's number of points is: <student1's points>
    //      Number of earned credits is: <student1's credits>
    //
    
    cout << "FIRST STUDENT INFORMATIONS " << endl;
    cout << "\n";
    cout << "The name of the student is: " << student1.getFullName() << endl;
    cout << "Major is: " << student1.getMajor() << endl;
    cout << "The student's number of points is: " << student1.getGradePoints() << endl;
    cout << "Number of earned credits is: " << student1.getCredits() << endl;
    cout << "\n";


    // ==================== Test The Constructor 2 ====================

    // Prompt and ask the user for
    //
    //      firstName, lastName, studentMajor, studentCredits,
    //      studentGradePoints,
    //
    // of the second student. Store these inputs in the local variables
    cout << "ENTER SECOND STUDENT INFORMATIONS " << endl;
    string firstName2,lastName2, studentMajor;
    int studentCredits, studentGradePoints; 

    cout << "Enter first name: " << endl;
    cin >> firstName2;
    cout << "Enter last name: " << endl;
    cin >> lastName2;
    cout << "Enter your major: " << endl;
    cin >> studentMajor;
    cout << "Enter your grade points: " << endl;
    cin >> studentGradePoints;
    cout << "Enter your total credits: " << endl;
    cin >> studentCredits;

    // Use the constructor 2 of Student class, which has 5 parameters,
    // to create a brand-new object student2. Be careful of the order of
    // parameters.
    Student student2(studentMajor,
    studentCredits, studentGradePoints,firstName2,lastName2);
    

    // Display the information of student2
    //
    // Please use the object and methods to retrieve the information. Do NOT
    // use the local varibales in this main function.
    //
    // The message template, the <> part should be replaced by the data
    // in student2:
    //
    //      SECOND STUDENT INFORMATIONS
    //      The name of the student is: <student2's fullname>
    //      Major is: <student2's major>
    //      The student's number of points is: <student2's points>
    //      Number of earned a is: <student2's credits>
    //
    // -->
    cout << "SECOND STUDENT INFORMATIONS " << endl;
    cout << "\n";
    
    cout << "The name of the student is: " << student2.getFullName() << endl;
    cout << "Major is: " << student2.getMajor() << endl;
    cout << "The student's number of points is: " << student2.getGradePoints() << endl;
    cout << "Number of earned credits is: " << student2.getCredits() << endl;
    cout << "\n";


    // ==================== Test changeMajor ====================

    // Use the helper function "changeMajor" to change the student2's major to
    // "International Affairs". After that, print the message as follows:
    //
    //     <student2's fullname> has changed majors to International Affairs
    //
    student2.changeMajor("International Affairs");
    cout << student2.getFullName() << " has changed majors to International Affairs" << endl;
    cout << "\n";

    // ==================== Test The loopHelper ====================

    // The following code is used to test your helper function loopHelper.
    // You don't have to modify it.

    cout << "STUDENT HELPER FUNCTIONS" << endl;
    cout << "\n";
    student1.loopHelper(1, 30, 3);
    student1.loopHelper(5, 28, 2);
    
    return 0;
}
