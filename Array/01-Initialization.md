# Declaration and Initialization

## Declaration

To declare an array following syntax is used

```c
int a[5];
```

This statement creates a block of 5 integers in memory and it assigns an address to `a` the name of the identifier.  
This address can be used to access other integers created inside the memory.

## Accessing and Assignment

To access an element in an array we use index of the element. The first element of array has an index of 0 and the second element has 1 and so on.

Following are the different methods of accessing an element and assigning it a value.

```c
a[2] = 10; //accesses element at index 2 and assigns a value 10.
3[a] = 20 // accesses element at index 3 and assigns a value 20.
```

## Initialization

Initialization is done at runtime. When an array is initialized the elements of array are assigned the value corresponding to the order or 0.

```c
int a[5] = {1, 2, 3, 4, 5};
int b[5] = {2,3,4};
```

Array `a` - 1 | 2 | 3 | 4 | 5 .  
Array `b` - 2 | 3 | 4 | 0 | 0.
