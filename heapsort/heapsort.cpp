#include <vector>
#include "max_heapify.h"
#include "build_max_heap.h"
#include "heapsort.h"

/**
 * When passed-by-reference a vector of type int, heapsort sorts the vector
 * into a max heap data structure.
 *
 * @param v a vector to be sorted
 *
*/
void heapsort(std::vector<int> &v, int length)
{
    build_max_heap(v,length);
    int heap_size = length-1;
    int tmp;

    for (int i = heap_size; i >= 0; i--) {
        tmp = v[0];
        v[0] = v[heap_size];
        v[heap_size] = tmp;
        heap_size--;
        max_heapify(v, 0, heap_size);
    }
}
