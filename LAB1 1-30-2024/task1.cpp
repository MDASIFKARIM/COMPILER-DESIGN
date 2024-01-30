#include <iostream>

int main() {

    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;




    int myArray[size];


    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }


    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += myArray[i];
    }


    double average = (sum) / size;


    std::cout << "The average value of the array elements is: " << average << std::endl;

    return 0;
}
