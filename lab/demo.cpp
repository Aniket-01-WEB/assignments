#include <iostream>

int main() {
    int numbers[100];
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " elements: ";
    for (int index = 0; index < size; ++index) {
        std::cin >> numbers[index];
    }

    std::cout << "Reversed array: ";
    for (int index = size - 1; index >= 0; --index) {
        std::cout << numbers[index] << ' ';
    }
    std::cout << '\n';

    return 0;
}''