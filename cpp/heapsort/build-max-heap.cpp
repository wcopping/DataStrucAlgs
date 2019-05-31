#include <vector>
#include "build-max-heap.h"
#include "max-heapify.h"

void build_max_heap(std::vector<int> &v, int length)
{
    int hs = length-1;
    for (int i = length>>1; i >= 0; i--) {
        max_heapify(v, i, hs);
    }
}

/** build_max_heap should start at i for i = lower(length(a)/2) to 1 and do max_heapify(a,i)
    when heap_size(a) = length(a)
      --> i.e. Go to the lowest level with branching and go to the rightmost node.

     1        0
             / \
     2 3    0   0
           / \ / \
     4--> 0  0 0  0
         / \
        0   0
*/
