//******************************************************************************
// FILE: Lab04.cpp
//
// DESCRIPTION
// Reads the coefficients of quadratic equations from "coeffs.txt". Calculates
// the roots of each equation and outputs the results to "roots.txt".

//
// COURSE INFO
// CSE100 Principles of Programming with C++, Spring 2020

//==============================================================================
// TESTING
//
// -----------------------------------------------------------------------------
// TEST CASE 1:
//
// DESCRIPTION:
// Tests that the two real roots of 2.5x^2 + 7.6x - 3 = 0 are calculated
// correctly.
//
// TEST CASE INPUT DATA:
// a = 2.5, b = 7.6, c = -3
//
// EXPECTED OUTPUT GIVEN THE INPUT:
// The equation 2.50000x^2 + 7.60000x + -3.00000 = 0 has roots 0.35361 and
// -3.39361.
//
// OBSERVED OUTPUT:
// <document the observed output here>
//
// TEST CASE RESULT: <document if the test case passed or failed>
// -----------------------------------------------------------------------------
// TEST CASE 2:
//
// DESCRIPTION:
// Tests that the two real roots ??? x^2 + ??? x + ??? = 0 are calculated
// correctly.
//
// TEST CASE INPUT DATA:
// a = ???, b = ???, c = ???
//
// EXPECTED OUTPUT GIVEN THE INPUT:
// <document the expected ouput>
//
// OBSERVED OUTPUT:
// <document the observed output here>
//
// TEST CASE RESULT: <document if the test case passed or failed>
// -----------------------------------------------------------------------------
// TEST CASE 3:
//
// DESCRIPTION:
// Tests that the two real roots ??? x^2 + ??? x + ??? = 0 are calculated
// correctly.
//
// TEST CASE INPUT DATA:
// a = ???, b = ???, c = ???
//
// EXPECTED OUTPUT GIVEN THE INPUT:
// <document the expected ouput>
//
// OBSERVED OUTPUT:
// <document the observed output here>
//
// TEST CASE RESULT: <document if the test case passed or failed>
// -----------------------------------------------------------------------------
// TEST CASE 4:
//
// DESCRIPTION:
// Tests that the two real roots ??? x^2 + ??? x + ??? = 0 are calculated
// correctly.
//
// TEST CASE INPUT DATA:
// a = ???, b = ???, c = ???
//
// EXPECTED OUTPUT GIVEN THE INPUT:
// <document the expected ouput>
//
// OBSERVED OUTPUT:
// <document the observed output here>
//
// TEST CASE RESULT: <document if the test case passed or failed>
//*******************************************************************************
#include <cmath>         // For sqrt()
#include <fstream>         // For ifstream and ofstream classes
#include <iomanip>         // For setprecision()
#include <iostream>         // For fixed and endl

using namespace std;

// Write the function definition for read_coeff(). Make sure to specify that the
// parameter 'fin' is defined as type ifstream& (we will discuss what the & means
// later in the course so don't worry about it for now).
double read_coeff(ifstream& fin){
    double coeff;
    fin.open("coeffs.txt");
    fin >> coeff >> coeff >> coeff;
    
    cout << coeff << endl;
    fin.close();
    return coeff;
}

// Write the function definition for discriminant().
double discriminant(double a, double b, double c)
{
    return pow(b,2) - (4 * a * c);
}

// Write the function definition for calc_root1().
double calc_root1(double a, double b, double c)
{
    return ((-1*b) + sqrt(discriminant(a,b,c))) / (2*a);
}

// Write the function definition for calc_root2().
double calc_root2(double a, double b, double c)
{
    return ((-1*b) - sqrt(discriminant(a,b,c))) / (2*a);
}

// Write the function definition for output().
void output(double a, double b, double c, double root1, double root2)
{
    ofstream fout;
    fout.open("roots.txt");
    //fout << setprecision(5);
    fout << "The equation " << a << "x^2 + " << b << "x" << " + " << c << " = 0 has roots " << root1 << " and " << root2 << "\n";
    fout.close();

}

// Write the function definition for main().
int main()
{
    ifstream fin;
    fin.open("coeffs.txt");
    double a = read_coeff(fin);
    double b = read_coeff(fin);
    double c = read_coeff(fin);
    ////
    double root1 = calc_root1(a,b,c);
    double root2 = calc_root2(a,b,c);
    fin.close();
    output(a,b,c,root1,root2);

    return 0;
}
