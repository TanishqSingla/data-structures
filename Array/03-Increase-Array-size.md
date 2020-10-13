# Increase Array size

To increase array size we need to have a dynamically allocated array.

```cpp
//cpp
int *p = new int[5];

int *q = new int[10];
```

To increase the size we will take a second array of the increased size, in this case `q`.

Now we will copy the elements in p to q. To do that we can use a for loop that copies each element.

```cpp
for(int i=0; i<5; i++) {
  q[i] = p[i];
}
```

Since we are no longer going to use the array stored in `p` we are going to free it or delete it.

```cpp
delete[] p;
```

After deleting we can reassign `p` with the array in `q` and then setting `q` to `NULL`.

```cpp
p = q;
q = NULL;
```

Now we have sucessfully increased the size of array p.
