#include "quicksort.h"
#include <iostream>

int main()
{
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    quicksort(v, 0, 9);
    for (int i = 0; i < 10; i++) {
        std::cout << v[i] << std::endl;
    }
    return 0;
}
