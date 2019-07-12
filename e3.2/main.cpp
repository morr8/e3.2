/*
 •• E3.2
 Write a program that reads a floating-point number and prints “zero” if the number is zero. Otherwise, print “positive” or “negative”. Add “small” if the absolute value of the number is less than 1, or “large” if it exceeds 1,000,000.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter number: ";
    float number;
    cin >> number;
    
    if (number == 0)
    {
        cout << "zero" << endl;
    }
    
    else
    {
        if (number > 0)
        {
            cout << "positive" << endl;
        }
        
        else
        {
            cout << "negative" << endl;
        }
        
        if (abs(number) < 1)
        {
            cout << "small" << endl;
        }
        
        else if (abs(number) > 1000000)
        {
            cout << "large" << endl;
        }
    }
}
