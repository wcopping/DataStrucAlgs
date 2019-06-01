#include "quicksort.h" // quicksort
#include <iostream>    // cout, endl
#include <fstream>     // ifstream
#include <chrono>      // high_resolution_clock, duration_cast
#include <algorithm>   // sort

int main()
{
    std::ifstream ist;
    ist.open("random-array.txt");
    if (!ist) {
        std::cerr << "Failed to open the input file.";
    }

    std::vector<int> a(1000, 0);

    for (int i = 0; i < 1000; i++) {
        ist >> a[i];
    }
    ist.close();

    std::vector<int> b = a;

    auto start = std::chrono::high_resolution_clock::now();
    std::sort(b.begin(), b.end());
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "duration of <algorithm> sort: " << duration.count() << std::endl;

    start = std::chrono::high_resolution_clock::now();
    quicksort(a, 0, a.size() - 1);
    stop = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "duration of my implemented quicksort: " << duration.count() << std::endl;

    return 0;
}
