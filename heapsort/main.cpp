#include <iostream>
#include <vector>
#include "heapsort.h"

int main()
{
    std::vector<int> v = {2, 5, 1, 16, 22, 45, 5, 7, 3, 2, 10, 36};
    heapsort(v);
    int size = v.size();
    for (int i = 0; i < size; i++) {
        std::cout << v[i] << std::endl;
    }
}
