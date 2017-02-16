#include <iostream>
#include <vector>
#include "heapsort.h"
#include "max_heapify.h"

inline int left(int i) { return i<<1; }
inline int right(int i) { return (i<<1)+1; }
inline int parent(int i) { return i>>1; }

/**
   Sorts the given vector into a max heap data structure
  
   @param v passed-by-reference vector
   @param i the starting index of the vector to begin max heapification
   @param hs the heap size of the passed vector which (on first iteration)
             starts out as the vector's length
*/
void max_heapify(std::vector<int> &v, int i, int hs)
{
    int l = left(i);
    int r = right(i);
    int largest;
    int tmp;

    // These next two if's will determine whether the element at i needs to
    // float to the left or to the right.
    // This if determines if it floats down to the left child heap.
    if (l <= hs && v[l] > v[i]) {
        largest = l;
    } else {
        largest = i;
    }

    // This if determines if the element at i needs to float down to the
    // right child heap.
    if (r <= hs && (v[r] > v[largest])) {
        largest = r;
    }

    // If the parent element was not larger than both its children then it 
    // exchanges the parent with its largest child and heapifies the new heap.
    if (largest != i) {
        tmp = v[i];
        v[i] = v[largest];
        v[largest] = tmp;
        max_heapify(v, largest, hs);
    }
}

