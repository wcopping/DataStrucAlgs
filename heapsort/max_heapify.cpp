#include <iostream>
#include "heapsort.h"
#include "max_heapify.h"

void maxHeapify(int *A, int i)
{
    int l = left(i);
    int r = right(i);
    int largest;
    int tmp;

    if (l <= A.heapSize() && (A[l] > A[i])) {
        largest = l;
    } else {
        largest = i;
    }

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
