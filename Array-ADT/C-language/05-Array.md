# Linear Search

Linear Search is an algorithm to search for a specific elment in an array. The worst case time complexity of the array is O(n)

## Improving Linear Search

Linear Search can be improved by two ways

- Transposition
- Move to Front/Head

### Transposition

In transposition we swap the query searched with the previous index to decrease the number of comparisons done in linear search. So every time we search for a particular element, it would be closer than the previous location.

### Move to Front/Head

In move to front we swap the first element of the array with the searched query so when we search for the same element next time the time complexity of the linear search would be constant or in other words O(1).
