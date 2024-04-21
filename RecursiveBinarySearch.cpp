#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int item) {
    return binarySearch(list, item, 0, list.size() - 1);
}

bool RecursiveBinarySearch::binarySearch(const std::vector<int>& list, int item, int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (list[mid] == item) return true;
        if (list[mid] > item) return binarySearch(list, item, low, mid - 1);
        return binarySearch(list, item, mid + 1, high);
    }
    return false;
}
