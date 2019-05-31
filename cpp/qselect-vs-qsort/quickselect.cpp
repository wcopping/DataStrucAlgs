#include <algorithm> // nth_element
#include <fstream>   // ifstream
#include <iostream>  // cout

// Takes in an int array and sorts it using the c++ version of
// quickselect, "nth_element".
// I put this together to check the time of sorting using quickselect
// vs the time for sorting using c++ built in sort (quicksort).
int main() 
{
    std::ifstream ist;
    ist.open("random-array.txt");
    if (!ist) {
        std::cerr << "Failed to open output file.";
    }

    int a[1000];

    for (int i = 0; i < 1000; i++) {
        ist >> a[i];
    }
    ist.close();

    for (int i = 0; i < 1000; i++) {
        std::nth_element(a, a + i, a + sizeof(a)/sizeof(*a));
        std::cout << a[i];
        std::cout << ", ";
    }
    std::cout << std::endl;
    return 0;
}
