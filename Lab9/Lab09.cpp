
/*-------------------------------------------------------------------------
// AUTHOR: Brian Ayon
// FILENAME: Lab09.cpp
// SPECIFICATION: Taking input into an array and outputting based on it.
// FOR: CSE 100- Lab #9
// TIME SPENT: 40 min
//-----------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() 
{
    // ========== Declaring variables ==========

    // An integer for the array size.
    int arraySize;

    // A double for the current element.
    double currentElement;

    // A double for the sum of elements.
    double sumOfElements;



    // ========== Request Array size from user ==========

    // Print this message "How many elements in the array?"
    cout << "How many elements in the array?" << endl;

    // Request an integer from the user using cin
    // and store the inputted value in the integer declared above.
    cin >> arraySize;


    // ========== Declare the array ==========

    // Declare a new array of size equal to the size requested
    double doubleArray[arraySize];

    // For reference, the following is an EXAMPLE declaration of an

    // integer array of a fixed size. DO NOT USE THIS ARRAY.
    // int[] integerArray = new int[25];


    // ========== Fill in the array ==========
    
    for(int i = 0; i < arraySize; i++) {

        // Display the message: "Please enter the next value."
        cout << "Please enter the next value." << endl;

        // Request the next element (double) from the user using cin.
        cin >> currentElement;
        

        // Store this element at the ith position of the array
        doubleArray[i] = currentElement;
    }


    // ========== Display and sum the array's elements ==========

    // Construct a for loop that runs backwards through the array,
    // starting at the last element and ending at the first.

    for (int i = arraySize - 1; i >= 0; i--) {

        // Inside this for loop, print the ith element of the array
        // and a tab, with NO newline characters.
        cout << doubleArray[i] << "\t";
        
        

        // If this element is the 8th one on its line, print a
        // newline character to advance to the next line.
        // Also inside this for loop, add the value of the ith
        // element to the current value of the double for the sum
        // of elements.
        sumOfElements += doubleArray[i];
        

    }
    cout << "\n";


    // ========== Display the sum ==========

    // Print the following message to the user, preceded by a
    // newline character.
    // "The sum of the array's elements is: <sum>"
    cout << "The sum of the array's elements is: " << sumOfElements << endl;

    return 0;

} // Close the main function.
