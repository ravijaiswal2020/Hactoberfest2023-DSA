#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int number) {
    int originalNumber, remainder, result = 0;
    int n = 0;

    // Assign the value of number into originalNumber
    originalNumber = number;

    // Calculate the number of digits in the number
    for (originalNumber = number; originalNumber != 0; originalNumber /= 10, ++n) {
    }

    // Assign the value of number into originalNumber again
    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the result is equal to the original number
    if (result == number) {
        return true;
    }

    return false;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
