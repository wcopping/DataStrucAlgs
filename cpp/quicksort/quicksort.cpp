#include "quicksort.h"

int partition(std::vector<int> &v, int p, int r);
void exchange(std::vector<int> &v, int i, int j);

/* 
 * Quicksort implementation taken from Cormen "Intro to Algs" 
 * Sorts a vector passed by reference using partition function implemented
 * below.
 *
 * @param &v Vector to be sorted, passed by reference
 * @param p  Start of the vector to quicksort
 * @param r  Pivot value index for quicksort to partition against
 * @return   Changes the vector which is passed to it
*/
void quicksort(std::vector<int> &v, int p, int r)
{
    if (p < r) {
        int q = partition(v, p, r);
        quicksort(v, p, q-1);
        quicksort(v, q+1, r);
    }

}

/*
 * Partitions the pass-by-reference vector into two parts based off a pivot, r, 
 * where the partition to the left of the pivot consists only of values which
 * are less than or equal to the pivot value and the partition on the right
 * consists of values greater than the pivot value.
 *
 * @param &v Passed-by-reference vector to be partitioned
 * @param p  Starting index of the vector to be partitioned
 * @param r  Pivot index
 * @return   The index at which the passed vector's partitions are separated at
 *           --Is used in quicksort to know where the left partition ends and
 *             where the right partition begins.
*/
int partition(std::vector<int> &v, int p, int r)
{
    int x = v[r];
    int i = p-1;
    for (int j = p; j < r; j++) {
        if (v[j] <= x) {
            i++;
            exchange(v, i, j);
        }
    }
    exchange(v, (i+1), r);
    return (i+1);
}

/* 
 * Method for exchanging two values within a passed-by-reference vector
 *
 * @param &v Passed-by-reference vector to have two of its elements switched
 *           in place
 * @param i  One of the values which is to be switched in place with another
 * @param j  The other of the values which is to be switched in place with
 * @return   Changes the vector which it is passed
*/ 
void exchange(std::vector<int> &v, int i, int j)
{
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}
