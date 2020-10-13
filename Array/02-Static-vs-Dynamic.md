# Static and Dynamic Arrays

## Static Arrays

Static array are made using the following syntax.

```c
int a[5];
```

Whenever we create a static array, we have to define a constant size, which in the above declaration is `5`. This creates a array of fixed size which is (5 \* sizeof(int)) here, in the stack.  
In c language size of the array has to be decided at compile time, whereas in c++ we can create an array of a certain size at runtime.
i.e

```cpp
//CPP
int n;
cin >> n; //getting n from user
int a[n];
```

However this is sometimes compiler dependent, so you should only create an array of fixed size at compile time, and for runtime create a dynamic array.

## Dynamic Arrays

To make a dynamic array we have to allocate the memory in the heap, to allocate memory in heap we must have a pointer that points to the block of memory in the heap.  
Note that the pointer is created in the main memory but the block that the pointer is pointing to is on the heap memory.

```c
//C syntax
int *p;
p = (int*)malloc(sizeof(int) * 5);

free(p);
```

In the above code we allocated a block of memory whose size is equal to 5 integers, since the block is in the heap memory we can do reallocate the memory of desired size, hence the name dynamic memory.  
The `malloc` function creates a block and `(int*)` typecasts the block to integer pointer type, as the pointer `p` is an integer pointer type.
The `free` deletes the block of memory created in the heap.  
**Note**: Whenever we create a memory in heap, it is necessary to delete that block after using it, this is done to avoid memory leak problem.

C++ syntax for the same is below.

```cpp
//Cpp syntax
int *p;
p = new int[5];

delete[] p;
```
