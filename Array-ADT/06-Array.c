/* Binary Search
  Binary search is a search algorithm which returns the searched term in O(log(n)) complexity
  Binary search requires a sorted array to work with
  How it works?
  Ans - Assuming the array is sorted, the algorithm takes two extreme points of the array i.e the lowest point and the highest point. Initially we take the first index and the last index of array.
  Then it takes the mid point of the range and compares it to required query, if the query is greater than the mid point then the mid point becomes the lowest point
  and if the query is less than the mid point then it becomes highest point, then it repeats the previous steps.
  If the number you searched for isn't in the arrary, then the loop will cause the lowest point to be greater than highest and if it does that we know that there is no such number in array.
  Note:- If the array is not sorted or it contains duplicate, the algorithm won't work.
*/

#include <stdio.h>
#include "Array.h"

int BinarySearch(struct Array arr, int key)
{
  int low, mid, high;
  low = 0;
  high = arr.length - 1;

  while (low <= high)
  {
    mid = (low + high) / 2;
    if (key == arr.arr[mid])
      return mid;
    else if (key < arr.arr[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }

  return 0;
}

int main()
{
  struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

  printf("%d\n", BinarySearch(arr, 5));
  Display(arr);
}