#include <algorithm> // sort
#include <fstream>   // ifstream
#include <iostream>  // cout

// Takes in an int array and sorts it using the c++ version of 
// quicksort, "sort".
// I put this together to check the time of sorting using quicksort
// vs the time for sorting using c++ built in quickselect (nth_element).
int main()
{
    std::ifstream ist;
    ist.open("random_array.txt");
    if (!ist) {
        std::cerr << "Failed to open the input file.";
    }

    int a[1000];

    for (int i = 0; i < 1000; i++) {
        ist >> a[i];
    }
    ist.close();

    std::sort(a,a+1000);

    for (int i = 0; i < 1000; i++) {
        std::cout << a[i];
        std::cout << ", ";
    }
    std::cout << std::endl;
    return 0;
}
