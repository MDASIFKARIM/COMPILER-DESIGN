#include <iostream>

int calculateFactorial(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int number;

    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int result = calculateFactorial(number);
        std::cout << "The factorial of " << number << " is: " << result << std::endl;
    }

    return 0;
}
