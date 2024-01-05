#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer for the number of elements." << endl;
        return 1;  // Exit with an error code
    }

    int num;
    int greatest;

    // Input the first number
    cout << "Enter number 1: ";
    cin >> greatest;

    // Loop to input the remaining numbers
    for (int i = 2; i <= n; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        // Check if the current number is greater than the current greatest
        if (num > greatest) {
            greatest = num;
        }
    }

    // Output the greatest number
    cout << "The greatest number among the entered numbers is: " << greatest << endl;

    return 0;  // Exit successfully
}
