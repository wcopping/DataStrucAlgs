#include <iostream>
#include "heapsort.h"
#include "max_heapify.h"

void max_heapify(int *A, int i)
{
    int l = left(i);
    int r = right(i);
    int largest;
    int tmp;

    // These next two if's will determine whether the element at i needs to
    // float to the left or to the right.
    // This if determines if it floats down to the left child heap.
    if (l <= A.heapSize() && (A[l] > A[i])) {
        largest = l;
    } else {
        largest = i;
    }

    // This if determines if the element at i needs to float down to the
    // right child heap.
    if (r <= A.heapSize() && (A[r] > A[largest])) {
        largest = r;
    }

    if (largest != i) {
        tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(*A, largest);
    }
}
