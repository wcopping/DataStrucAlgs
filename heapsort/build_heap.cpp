#include "build_heap.h"

int build_heap(int *A)
{
    return 0;
}

// Build heap should start at i for i = lower(length(a)/2) to 1 and do max_heapify(a,i)
// when heap_size(a) = length(a)
// --> i.e. Go to the lowest level with branching and go to the rightmost node.
//     1        0
//             / \
//     2 3    0   0
//           / \ / \
//     4--> 0  0 0  0
//         / \
//        0   0
