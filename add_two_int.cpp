#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: \n";
    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;

    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;
    return 0;
}
