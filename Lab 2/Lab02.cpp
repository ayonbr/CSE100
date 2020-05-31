//**************************************************************************
//
// DESCRIPTION: Reads three exam scores for three students, calculates and displ// ays the average exam score and the standard deviation of the exam scores.
//

//
// COURSE: 	CSE 100 Principles of Programming with C++, Spring 2020
// --------------------------------------------------------------------------
// TESTING
//
// Test Case 1
// ------------
// Description: Tests that the program computes and displays correct exam average // and standard deviation
//
// Input Data:
// Homer's exam score: 73
// Lisa's exam score: 100
// Ralph's exam score: 44
//
// Expected Output:
// The exam average score is: 72.33%
// The exam standard deviation is: 28.01
//
// Actual Output:
// The exam average score is: 72.33%
// The exam standard deviation is: 28.01
//
// Test 1 Case Results: Passed
//
// Test Case 2
// Input: Homer - 62, Lisa - 100, Ralph - 28
// Expected output:
// The average exam score is:	0.00%
// The exam standard deviation is: 0.00
//
// Actual Output: 
// The average exam score is:	0.00%
// The exam standard deviation is: 0.00
//
// Test 2 Case Results: Passed
//
// Test Case 3:
// Input: Homer - 100, Lisa - 100, Ralph - 100.
// Expected output:
// The average exam score is: 100.00%
// The exam standard deviation is: 0.00
//
// Actual Output:
// The average exam score is:	100.00% 
// The exam standard deviation is: 0.00

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int const NUM_STUDENTS = 3;

int main(){

int exam_homer;
int exam_lisa;
int exam_ralph; 

double exam_avg;
double exam_variance;
double exam_stddev;

cout << "Enter exam score for Homer: ";
cin >> exam_homer;
 
cout << "Enter exam score for Lisa: ";        
cin >> exam_lisa;

cout << "Enter exam score for Ralph: ";        
cin >> exam_ralph;

exam_avg = (exam_homer + exam_lisa + exam_ralph) / static_cast<double>(NUM_STUDENTS);
exam_variance = (pow(static_cast<double>(exam_homer - exam_avg), 2) + pow((exam_lisa - exam_avg), 2) + pow((exam_ralph - exam_avg), 2)) / (NUM_STUDENTS - 1); 
exam_stddev = sqrt(static_cast<double>(exam_variance));

cout << fixed << setprecision(2);
cout << endl;
cout << "The average exam score is: " << exam_avg << "%\n";
cout << "The exam standard deviation is: " << exam_stddev;

return 0;

}
