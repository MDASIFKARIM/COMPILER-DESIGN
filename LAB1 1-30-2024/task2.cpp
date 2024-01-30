#include <iostream>

int main() {

    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;


    int myArray[size];


    std::cout << "Enter " << size << " elements for the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }


    int min = myArray[0];
    int max = myArray[0];


    for (int i = 1; i < size; ++i) {
        if (myArray[i] < min) {
            min = myArray[i];
        }
        if (myArray[i] > max) {
            max = myArray[i];
        }
    }


    std::cout << "Minimum value in the array: " << min << std::endl;
    std::cout << "Maximum value in the array: " << max << std::endl;

    return 0;
}
