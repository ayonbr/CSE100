//**************************************************************************************************  // 
// FILE: Lab01.cpp
//
// DESCRIPTON
// This program uses user input to assign a value to yearly salary. Given yearly 
// salary, it then calculates the monthly and weekly salary by simple calculations.
// It then prints out the three values for the user to see.

//
// AUTHOR'S
// Name: Brian Ayon    Email: bayon1@asu.edu
//
// COURSE INFO
// CSE100 Principles of Programming with C++. Spring 2020
// Lab Project 1    Lab Date and Time: Tuesday, 10:30 am     TA Name: 


#include <iostream>

using namespace std;

extern void print_objectives();

//---------------------------------------------------------------------------------------------------
// main()
//
// main() is the starting point of execution for all C++ programs. We shall discuss it in more detail
// in the lectures.
//---------------------------------------------------------------------------------------------------
int main()
{
    // Call print_objectives() to display the learning objectives for Lab Project 1 to the output
    // window.
    print_objectives();
    
    // Define double variables to store yearly, monthly, and weekly salaries in variables called yearly_salary, monthly_salary and weekly_salary respectively.
    double yearly_salary;
    double monthly_salary;
    double weekly_salary;	
    
    // Read the yearly salary from the user, storing the value in year_salary.
	// Remember to prompt the user to enter the value for their yearly_salary first.
    
    cout << "Enter the yearly salary: $";
    cin >> yearly_salary;
    cout << endl;

    // Calculate monthly and weekly salaries storing the values in month_salary and week_salary.
    monthly_salary = yearly_salary / 12;
    weekly_salary = monthly_salary / 4;

    // Display the results.    
    cout << "Your yearly salary is $" << yearly_salary << endl;
    
    // In a similar manner display their monthly and weekly salaries on separate lines.
    cout << "Your monthly salary is $" << monthly_salary << endl;
    cout << "Your weekly salary is $" << weekly_salary << endl;

    

    // main() must always return a value. 0 is returned to indicate that the program completed
    // successfully.
    return 0;
}
