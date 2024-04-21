#include <iostream>
#include <sstream>
#include <vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> numbers;
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    QuickSort sorter;
    numbers = sorter.sort(numbers);

    RecursiveBinarySearch searcher;
    bool found = searcher.search(numbers, 1);

    std::cout << (found ? "true" : "false");
    for (int n : numbers) {
        std::cout << " " << n;
            }
    std::cout << std::endl;
    return 0;
}
