#include <iostream>

int main() {
    int n, number;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> number;

        if (number < smallest) {
            smallest = number;
        }

        if (number > largest) {
            largest = number;
        }
    }

    std::cout << "Smallest number: " << smallest << std::endl;
    std::cout << "Largest number: " << largest << std::endl;

    return 0;
}