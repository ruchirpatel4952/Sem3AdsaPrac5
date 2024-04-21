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
            int p = l + 2; // Choosing the third element as the pivot when possible
            std::swap(list[p], list[h]);
            int i = l;
            for (int j = l; j < h; ++j) {
                if (list[j] < list[h]) {
                    std::swap(list[i], list[j]);
                    i++;
                }
            }
            std::swap(list[i], list[h]);

            stack.push(l);
            stack.push(i - 1);
            stack.push(i + 1);
            stack.push(h);
        }
    }
    return list;
}
