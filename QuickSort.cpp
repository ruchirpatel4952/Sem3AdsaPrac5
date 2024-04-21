#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    std::stack<int> stack;
    stack.push(0);
    stack.push(list.size() - 1);

    while (!stack.empty()) {
        int h = stack.top();
        stack.pop();
        int l = stack.top();
        stack.pop();

        if (l < h) {
            int p = (l + 2 < h) ? l + 2 : h; // Updated pivot choice logic to handle small arrays
            int pivot = list[p];
            std::swap(list[p], list[h]); // Move pivot to end for easier partitioning
            int i = l;

            for (int j = l; j < h; ++j) {
                if (list[j] < pivot) {
                    std::swap(list[i], list[j]);
                    i++;
                }
            }
            std::swap(list[i], list[h]); // Swap back the pivot to its correct position

            stack.push(l);
            stack.push(i - 1);
            stack.push(i + 1);
            stack.push(h);
        }
    }
    return list;
}
