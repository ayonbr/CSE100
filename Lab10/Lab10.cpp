/*-------------------------------------------------------------------------
// FILENAME: Lab10.cpp
// SPECIFICATION: Being able to manipulate array through sorting and removing
//----------------------------------------------------------------------*/

#include <iostream>

using namespace std;


int main()
{
    // ============================================================
    // Declare some variables. You might need
    // int for array size
    int arrSize;
    // - a int for the exchange element, and
    int temp;
    // - a cin for requesting input 
    
    int element;
    

    // ============================================================
    // Request array size from the user
    // 
    // - Print this message "How many elements in the array?"
    cout << "How many elements in the array?" << endl;
    // - Request an integer from the user using cin  and save it
    // 
    cin >> arrSize;
    
    // Declare a int array by the size you received above
    int arr[arrSize];
    

    // ============================================================
    // Fill in the Array

    int numOfElements = arrSize;
    for (int i = 0; i < numOfElements; i++)
    {        
        // Display the message: "Please enter the next value:"
        cout << "Please enter the next value:" << endl;
        // Request the next element (int) from the user,
        // save it to the ith element of the array
        cin >> element; 
        arr[i] = element;
    }
    

    // ============================================================
    // Sort the array's elements in increasing order
    // 
    // Here we will use Selection Sort like algorithm.

    // The first for loop iterates all elements as element_i
    for (int i = 0; i < numOfElements; i++)
    {
        // The second for loop finds the right position of element_i
        for (int j = i + 1; j < numOfElements; j++)
        {
            // Compare ith value and jth value,
            // 
            // - If array[i] >= array[j], swap these two values
            //   
            // For example, let array[i] = 10, array[j] = 20, to swap
            // array[i] and array[j] means array[i] will become 20
            // and array[j] will have 10.
            // 
            // To swap the values in two position, you would need an
            // extra variable to temporarily hold the value. For example,
            // 
            //     temp = array[i];
            //     array[i] = array[j];
            //     array[j] = temp;
            // 
            if (arr[i] >= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // ============================================================
    // Display the sorted array on the same line
    
    cout << "The array after sorting" << endl;

    for (int i = 0; i < numOfElements; i++)
    {
        // Print ith element, do NOT include line break
        cout << arr[i] << " ";
    }

    // Print a line break
    cout << "\n";
    
    
    // ============================================================
    // Remove the minimum in the sorted array
    // 
    // As our array is sorted in the increasing order, to remove the
    // minimum, we just remove the first element in the array. It is like
    // shifting the array to the left by one element.
    
    // Because we are doing shifting, in each iteration, we use two
    // values, one at index i, the other at index i+1.
    // To prevent us from going over the boundary of array, the following
    // offset variable should be set as the correct value.
    int offset = -1;
    
    // In this for loop, we move the element at i + 1 to the position i
    for (int i = 0; i < numOfElements - offset; i++)
    {
        // Move array[i + 1] to array[i]
        arr[i] = arr[i+1];
    }

    // The last element will be set as zero. Remember the greatest index
    // should be array's length - 1.
    // -->
    arr[arrSize-1] = 0;
    
    // ============================================================
    // Display the Array after removing the first element
    
    cout << "The array with the minimum removed" << endl;
    
    for (int i = 0; i < numOfElements; i++)
    {
        // Print ith element, do NOT include line break
        cout << arr[i] << " ";
    }

    // Print a line break
    cout << "\n";
    
    
    // ============================================================
    // Search for an element and remove it

    // Ask the user which element to remove
    cout << "Enter the value to search and remove:" << endl;
    // Use cin to get a value for search
    int valueToRemove;
    cin >> valueToRemove;

    // To search, we can iterate all values, record the index of target (t),
    // and then shift to the left values from t to the end.
    bool isFound = false;
    for (int i = 0; i < numOfElements; i++)
    {
        // if ith element == valueToRemove,
        //     Set a flag isFound
        // 
        if(arr[i] == valueToRemove)
        {
            isFound = true;
            for (int j = i; j < numOfElements; j++)
            {
                if (j == numOfElements-1){
                    arr[j] = 0;
                }
                else{
                    arr[j] = arr[j+1];
                }
            }
            break;
        }

    }

    if (isFound)
    {
        cout << "Search element found"<< endl;
    }
    else
    {
        cout << "Search element NOT found" << endl;   
    }

    // ============================================================
    // Display the final array
    
    cout << "\nThe final array" << endl;
    
    for (int i = 0; i < numOfElements; i++)
    {
        // Print ith element, do NOT include line break
        cout << arr[i] << " ";
    }

    // Print a line break
    cout << "\n";

}
