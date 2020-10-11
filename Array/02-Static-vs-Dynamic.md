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
