#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>

int main()
{
    std::ofstream ost;
    ost.open("random-array.txt");
    if (!ost) {
        std::cerr << "Failed to open output file.";
    }

    srand(unsigned(time(0)));
    int a[1000];
    for (int i = 0; i < 1000; i++) {
        a[i] = (rand()%10000)+1;
    }

    for (int i = 0; i < 1000; i++) {
        ost << a[i] << std::endl;
    }

    ost.close();
}

