/*------------------------------------------------------------
// AUTHOR: Brian Ayon
// FILENAME: Student.h
// SPECIFICATION: header file containing the student class
// FOR: CSE 100- Lab #8
// TIME SPENT: 30 min
//-----------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;


class Student
{
    // Declare the attributes of this class here. 
    // Make sure you create the attributes as private variables.
    private:
    string studentMajor;
    int studentCredits;
    int studentPoints;
    string firstName;
    string lastName;

    
    // Define the methods/functions of this class below. 
    // Make sure you define the functions as public so that the functions can be accessed outside this class.
    public:
    // ==================== Constructor 1 ==================== 
    
    Student (string fName, string lName) 
    { 
        // write the segment of code that assigns fName and Lname to the instance 
        // variables. 
        firstName = fName;
        lastName = lName;
 
        // The rest of variables are initialized to default values   
        studentMajor = "General Studies";    
        studentPoints = 0;         
        studentCredits = 0; 

    }  
    
    // ==================== Constructor 2 ==================== 
 
    Student (string major, int credits, int points, string fName, string lName) 
    { 
        // Write the segment of code 
        // that assigns input data to the data members  
        studentMajor = major;
        studentCredits = credits;
        studentPoints = points;
        firstName = fName;
        lastName = lName;
        
    } 
    
    // ===============  Define the helper (get and set) functions below   ==================
    
    // Define a function getMajor() that takes no parameters 
    // but returns the string stored in the attribute studentMajor
    string getMajor()
    {
        return studentMajor;
    }
    
    
    // Define a function getGradePoints() that takes no parameters 
    // but returns the integer stored in the attribute studentPoints
    int getGradePoints()
    {
        return studentPoints;
    }
    
    // Define a function getCredits() that takes no parameters 
    // but returns the integer stored in the attribute studentCredits
    int getCredits()
    {
        return studentCredits;
    } 
    
    // Define a function getFullName() that takes no parameters 
    // but returns the string stored in the attributes firstName and lastName combined together as one string
    // You must return a string that combines both names to form full name as firstName + " " + lastName.
    string getFullName()
    {
        string output = firstName; //<< " " << lastName;
        return output;
    }
    
    // Define a function changeMajor() that takes one parameter which is a string called newMajor 
    // and does not return anything.
    // Inside the function assign the 'studentMajor' attribute to the parameter passed to the function i.e. newMajor
    // studentMajor = newMajor;
    void changeMajor(string newMajor)
    {
        studentMajor = newMajor;
    }
    
    // Define a function loopHelper() that takes three parameters start, end and incBy all of which are integers.
    // and does not return anything.
    // Inside the function using a loop construct 
    // which computed the sum of the sequence of integers starting from start to end and incremented by the value incBy
    
    void loopHelper(int start, int end, int incBy)
    {
        // Declare a variable called sum to hold the value of the sum of the sequence
        // Initialize the value of sum to zero
        int sum = 0; 
        
        cout << "Iterate from " << start << " till " << end << " with " << incBy << " steps and find sum" << endl;
        for (int i = start ; i <= end; i+=incBy){
            cout << i << " ";
            sum += i;
            
        }
        cout << "\n"; 
        
        // print the sum of the sequence starting from 'start' till 'end' with 'incBy' steps
        cout << "Sum is " << sum << endl;
        cout << "\n";
    
    }

};