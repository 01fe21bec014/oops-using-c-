#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    // Display the reversed number
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}

